function [A,B,C,D] = myfunc(par1,par2,par3,par4,Ts)
    A = [-par2*par3-par3*par4 par2*par3; par1*par2 -par1*par2];
    B = [0 par3*par4; par1 0];
    C = eye(2);
    D = zeros(2,2);
end

