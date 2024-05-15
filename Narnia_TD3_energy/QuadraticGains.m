classdef QuadraticGains
    % Tunable gains for Linear Quadratic reward (r2)
    properties (Constant)
        Q = [1/40 0; 0 1e-2];
        R = 5e-3;
        N = [4e-3; 5e-3];
    end
end

