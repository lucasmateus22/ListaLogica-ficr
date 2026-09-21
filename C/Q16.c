#include <stdio.h>

int main()
{
    int valor;
    printf("Entre com o valor: \n");
    scanf("%d", &valor);

    if (valor > 0)
    {
        printf("%d", valor);
    }
    else if (valor < 0)
    {
        printf("%d", -valor);
    }
    else
    {
        printf("É zero");
    }
}