#include <stdio.h>

int main()
{
    float itemQ5;
    printf("Entre com o valor em centímetros para converter para polegadas: \n");
    scanf("%f", &itemQ5);
    
    float convertCmP = itemQ5 / 2.54;
    printf("O resultado é: %.2f polegadas", convertCmP);
}


