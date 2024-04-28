function action1 = evaluatePolicy(observation1)
%#codegen

% Reinforcement Learning Toolbox
% Generated on: 26-Apr-2024 14:59:34

persistent policy;
if isempty(policy)
	policy = coder.loadRLPolicy("agentData.mat");
end
% evaluate the policy
action1 = getAction(policy,observation1);

% Hieu's edit - cast action1 from double to float
% to fit on STM32L452RE MCU
action1 = single(action1);