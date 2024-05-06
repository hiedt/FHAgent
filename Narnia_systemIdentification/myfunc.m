function [A,B,C,D,K] = myfunc(par,Ts)
    A = [0 0 1; -par(1)*par(2) 0 -par(2)*par(3); 0 0 0];
    B = [0; par(2); 0];
    C = [1 1 0];
    D = zeros(1,1);
    K = [0;  par(1)*par(2); 0];
    % x0 = [0; 0; 0]; % A guess of initial state
end

