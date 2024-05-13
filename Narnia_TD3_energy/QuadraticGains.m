classdef QuadraticGains
    % Tunable gains for Linear Quadratic reward (r2)
    properties (Constant)
        Q = [2e-2 0; 0 1e-2];
        R = 1e-3;
        N = [0; 0];
    end
end

