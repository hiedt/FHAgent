function action1 = evaluatePolicy(observation1)
%#codegen

% Reinforcement Learning Toolbox
% Generated on: 17-Apr-2024 15:53:52

persistent policy;
if isempty(policy)
	policy = coder.loadRLPolicy("agentData3.mat");
end
% evaluate the policy
action1 = getAction(policy,observation1);