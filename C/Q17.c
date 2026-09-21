#include <stdio.h>

int main()
{
    int valor;
    int valor2;
    printf("Entre com o valor: \n");
    scanf("%d", &valor);

    printf("Entre com outro valor: \n");
    scanf("%d", &valor2);

    if (valor == valor2)
    {
        printf("Os valores são iguais");
    }
    else{
        if (valor > valor2){
            printf("O primeiro valor é maior, eles são diferentes");
        } else {
            printf("O segundo valor é maior, eles são diferentes");
        }
    }
}