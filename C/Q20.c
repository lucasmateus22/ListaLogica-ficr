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


    if (valor == valor2 || valor == valor3 || valor2 == valor3) {
        printf("Os valores devem ser distintos.\n");
    }

    else if (valor < valor2 && valor2 < valor3) {
        printf("%d, %d, %d\n", valor, valor2, valor3);
    }
    else if (valor < valor3 && valor3 < valor2) {
        printf("%d, %d, %d\n", valor, valor3, valor2);
    }
  
    else if (valor2 < valor && valor < valor3) {
        printf("%d, %d, %d\n", valor2, valor, valor3);
    }
    else if (valor2 < valor3 && valor3 < valor) {
        printf("%d, %d, %d\n", valor2, valor3, valor);
    }

    else if (valor3 < valor && valor < valor2) {
        printf("%d, %d, %d\n", valor3, valor, valor2);
    }
    else {

        printf("%d, %d, %d\n", valor3, valor2, valor);
    }

    return 0;
}