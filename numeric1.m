
func = @(x) x^3 - 0.165*(x^2) +3.993e-4;


a = 0;
b = 0.11;


tolerance = 1e-6;
max_iterations = 100;


if func(a) * func(b) >= 0
    error('Function does not change sign over the interval');
end


iter = 0;
root = (a + b) / 2;


while (b - a) / 2 > tolerance
    c = (a + b) / 2;
    if func(c) == 0
        root = c;
        break;
    elseif func(c) * func(a) < 0
        b = c;
    else
        a = c;
    end

    iter = iter + 1;
    if iter >= max_iterations
        break;
    end
end


disp(root);


