#include <stdio.h>

float raiz_quadrada(float n) {
    if (n <= 0) return 0;

    float estimativa = n / 2.0;
    for (int i = 0; i < 15; i++) {
        estimativa = (estimativa + (n / estimativa)) / 2.0;
    }

    return estimativa;
}

int main()
{
    float a, b, c, delta, x1, x2, raiz_delta;

    printf("Entre com o valor de A: ");
    scanf("%f", &a);

    if (a == 0) {
        printf("Se 'a' for 0, não é uma equação do 2º grau.\n");
        return 0;
    }

    printf("Entre com o valor de B: ");
    scanf("%f", &b);

    printf("Entre com o valor de C: ");
    scanf("%f", &c);

    delta = (b * b) - (4 * a * c);

    if (delta < 0) {
        printf("%.2f é negativo.\n", delta);
    } 
    else if (delta == 0) {
        x1 = -b / (2 * a);
        printf("Há duas soluções reais e iguais: x1 = x2 = %.2f\n", x1);
    } 
    else {
        raiz_delta = raiz_quadrada(delta);
        
        x1 = (-b +raiz_delta) / (2*a);
        x2 = (-b - raiz_delta) / (2*a);
        
        printf("Existem duas soluções reais e diferentes:\n");
        printf("x1 = %.2f\n", x1);
        printf("x2 = %.2f\n", x2);
    }

    return 0;
}
