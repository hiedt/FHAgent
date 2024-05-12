classdef QuadraticGains
    % Tunable gains for Linear Quadratic reward (r2)
    properties (Constant)
        Q = [1e-2 0; 0 1e-3];
        R = [1e-4 0; 0 -0.1];
        N = [0 0; 0 0];
    end
end

