#include <stdio.h>

int main()
{
    int valor;
    int valor2;
    int valor3;
    printf("Entre com o primeiro valor: \n");
    scanf("%d", &valor);

    printf("Entre com o segundo valor: \n");
    scanf("%d", &valor2);
    
    printf("Entre com o terceiro valor: \n");
    scanf("%d", &valor3);

    if (valor == valor2 == valor3)
    {
        printf("Os valores são iguais");
    }
    else if (valor > valor2 && valor > valor3){
        printf("O valor %d é maior", valor);
    }else if (valor2 > valor3 && valor2 > valor3){
        printf("O valor %d é maior", valor2);
    }else if (valor3 > valor && valor3 > valor2){
        printf("O valor %d é maior", valor3);
    }
}