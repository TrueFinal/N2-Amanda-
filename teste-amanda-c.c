#include <stdio.h>
#include <math.h>

// Função cujas raízes queremos encontrar
float f(float x) {
    return x*x - 4; // Exemplo: x^2 - 4
}

// Derivada da função f
float df(float x) {
    return 2*x; // Exemplo: 2x
}

// Método de Newton-Raphson
float newtonRaphson(float x0, float epsilon) {
    float x = x0;
    float fx, dfx;
    
    do {
        fx = f(x);
        dfx = df(x);
        
        // Atualiza o valor de x usando a fórmula do método de Newton-Raphson
        x = x - (fx / dfx);
        
    } while (fabs(fx) > epsilon); // Repete até que a diferença seja menor que epsilon
    
    return x;
}

int main() {
    float x0 = 1.0; // Valor inicial para x
    float epsilon = 0.0001; // Precisão desejada
    
    float raiz = newtonRaphson(x0, epsilon);
    
    printf("A raiz é: %f\n", raiz);
    
    return 0;
}

    