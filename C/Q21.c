#include <stdio.h>

int main()
{
    int valor, valor2, valor3;

    printf("Entre com o primeiro valor: \n");
    scanf("%d", &valor);

    printf("Entre com o segundo valor: \n");
    scanf("%d", &valor2);
    
    printf("Entre com o terceiro valor: \n");
    scanf("%d", &valor3);


    if (valor == valor2 && valor == valor3 && valor2 == valor3) {
        printf("O triângulo é equilátero");
    }
    else if (valor == valor2 || valor2 == valor3 || valor == valor3) {
        printf("O triângulo é isóceles, também equilátero.");
    }
    else if (valor != valor2 || valor != valor3 || valor2 != valor3) {
        printf("O triângulo é Escaleno");
    }
  
    return 0;
}