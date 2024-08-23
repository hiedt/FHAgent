%% TD3 Agent Building for Narnia with PWM Duty Cycle Output
simenv = "Narnia_model";
open_system(simenv);
run("../Narnia_systemIdentification/estim_by_physics.mlx"); %Load system's parameters
%% Environment Definition
% This application aims at creating a single-action agent that estimate only 
% PWM duty cycle $D$$\text{$D \in [0,1]$ \% and period $P \in [10,30]$ minutes}}$

actInfo = rlNumericSpec([1 1],...
    LowerLimit=0,...
    UpperLimit=100,...%Use smaller D's upper bound to make training faster
    Name="PWM duty cycle", ...
    Description="%", ...
    DataType='uint8');
obsInfo = rlNumericSpec([6 1],...
    LowerLimit=[-inf -inf -inf -inf -inf -inf]',...
    UpperLimit=[ inf  inf  inf  inf  inf  inf]',...
    Name = "observation",...
    Description = "integrated Ta error, Ta error, Ta, Ta-To, Tf, load");

env = rlSimulinkEnv(simenv, ...
        simenv+"/Thermostat/RL Agent", ...
        obsInfo, actInfo);
env.ResetFcn = @(in)localResetFcn(in);

Ts = 0.25; %Agent sampling time (hours)
Tf = 24; %Always run for 1 full day
P = 0.2; %PWM period (hours)
rng(0);
%% Define a Default TD3 Agent for Training

default_opt = rlTD3AgentOptions(SampleTime=Ts,...    
    MiniBatchSize=512, ...
    ExperienceBufferLength=1e+6,...
    ActorOptimizerOptions=rlOptimizerOptions("LearnRate",1e-4),...
    CriticOptimizerOptions=rlOptimizerOptions("LearnRate",5e-4));

default_opt.ExplorationModel.StandardDeviation = 0.4; %increase exploration
default_opt.ExplorationModel.StandardDeviationDecayRate = 1e-6;

default_opt.TargetPolicySmoothModel.StandardDeviation = 0.2;
default_opt.TargetPolicySmoothModel.StandardDeviationDecayRate = 1e-5;
default_opt.TargetPolicySmoothModel.StandardDeviationMin= 0.01;

default_agent = rlTD3Agent(obsInfo, actInfo, default_opt);
%% Evaluate a Trained TD3 Agent with a Random Case
rng(14);
simOpts = rlSimulationOptions(MaxSteps=ceil(Tf/Ts),StopOnError="on");
simEnv = rlSimulinkEnv(simenv, ...
        simenv+"/Thermostat/RL Agent", ...
        obsInfo, actInfo);
simEnv.ResetFcn = @(in)localResetFcn(in);

load("best_agent.mat");
experiences = sim(simEnv, best_agent, simOpts);
%% Local Reset Function

function in = localResetFcn(in)
    simenv = "Narnia_model";
    %Randomize reference step signal
    blk = simenv + "/Changing Setpoint";
    r1 = 4*randn + 20; %Gaussian dist: E=20; Std=2
    while r1 <= HeatLimit.Lower || r1 >= HeatLimit.Upper
        r1 = 4*randn + 20;
    end
    r2 = 4*randn + 20; %Gaussian dist: E=20; Std=2
    while r2 <= HeatLimit.Lower || r2 >= HeatLimit.Upper || r2 == r1
        r2 = 4*randn + 20;
    end
    % r1 = 24;
    % r2 = 28;
    in = setBlockParameter(in,blk,Before=num2str(r1));
    in = setBlockParameter(in,blk,After=num2str(r2));
    
    %Randomize initial temperature
    T0 = 3*randn + 15; % Gaussian dist: E=15; Std=1.7321
    while T0 <= HeatLimit.Lower || T0 >= HeatLimit.Upper
        T0 = 3*randn + 15;
    end
    % T0 = 12;
    % T0C = [T0; T0+2]; %Floor temp always hotter than air temp
    % in = setBlockParameter(in, simenv+"/Mean Temp per Ts", x0=string(T0C));
    T0K = [T0 + 273; T0 + 279];
    in = setBlockParameter(in, simenv+"/Narnia/Cont Integrator", ...
        InitialCondition=string(T0K));

    %Randomize average outside temperature
    blk = simenv+"/Average Day Temp";
    avgTo = 10*randn; %Gaussian dist: E=0; Std=3.1623
    while avgTo >= T0 - 2 %Only colder environment
        avgTo = 10*randn;
    end
    % avgTo = 8;
    in = setBlockParameter(in,blk,Value=num2str(avgTo));
    
    %Randomize load of the heating coil
    blk = simenv+"/Heater/Load (kOhm)";
    load = 9*randn + 8; %Gaussian dist: E=8; Std=3
    while load <= 0 % Non-zero
        load = 9*randn + 8;
    end
    in = setBlockParameter(in,blk,Value=num2str(load));
end