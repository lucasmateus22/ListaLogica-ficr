#include <stdio.h>

int main()
{
    int valor;
    printf("Entre com um valor: ");
    scanf("%d", &valor);

    if (valor % 2 == 0) { 
        printf("O valor é par");
    } else {
        printf("O valor é ímpar");
    }
}