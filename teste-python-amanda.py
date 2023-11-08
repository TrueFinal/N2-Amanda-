import stdio
import math

def newton_raphson(f, df, x0, tol, max_iter, ):
    x = x0
    for i in range(max_iter):
        x_next = x - f(x) / df(x)
        if abs(x_next - x) < tol:
            return x_next
        x = x_next
        raise ValueError('O método de Newton-Raphson não convergiu após o número máximo de iterações!')
    
    if __name__ == '__main__':
        f = lambda x: x**2 -2
        df = lambda x: 2 * x
        x0 = 1.0
        tol = 1e-6
        max_iter = 100

        raiz_aproximada = newton_raphson(f, df, x0, tol, max_iter)
        print('Raiz aproximada:', raiz_aproximada)