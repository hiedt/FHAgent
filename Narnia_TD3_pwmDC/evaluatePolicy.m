function action = evaluatePolicy(observation)
%#codegen

% Reinforcement Learning Toolbox
% Generated on: 21-May-2024 12:03:52

persistent policy;
if isempty(policy)
	policy = coder.loadRLPolicy("agentData.mat");
end
% evaluate the policy
action = getAction(policy,observation);