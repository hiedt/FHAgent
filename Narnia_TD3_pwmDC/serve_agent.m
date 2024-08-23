%% Export trained agents into C++ object to be served on MCU

clear all;
load("best_agent.mat", "best_agent");

agent = best_agent;
generatePolicyFunction(agent);
%% Generate code for ARM Cortex M4

cfg = coder.config('lib','ecoder',true); % output type coder.EmbeddedCodeConfig
cfg.TargetLang = "C++";
cfg.EnableOpenMP = false; % STM32L4 does not support OpenMP
cfg.HardwareImplementation.ProdHWDeviceType = 'ARM Compatible->ARM Cortex-M';
% cfg.Hardware = coder.hardware('STM32L4xx Based');
cfg.CodeReplacementLibrary = 'ARM Cortex-M';

dlcfg = coder.DeepLearningConfig(TargetLibrary='none');
dlcfg.LearnablesCompression = 'bfloat16';
cfg.DeepLearningConfig = dlcfg;

cfg.GenCodeOnly = true;
cfg.Toolchain = "CMake";

argstr = "{ones(6,1,'single')}";
codegen('-config','cfg','evaluatePolicy',...
    '-args',argstr,...
    '-report',...
    '-d','../../internal_fhagent/source');