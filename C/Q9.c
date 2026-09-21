#include <stdio.h>

int main()
{
    int Valor1;
    printf("Entre com o primeiro valor: ");
    scanf("%d", &Valor1);
    
    int Valor2;
    printf("Entre com o segundo valor: ");
    scanf("%d", &Valor2);
    
    printf("Você escolheu:\n Primeiro valor: %d \n Segundo valor: %d", Valor1, Valor2);
    
    int valorExtra = 0;
    printf("\n Os valores serão trocados...");
    
    valorExtra = Valor1;
    Valor1 = Valor2;
    Valor2 = valorExtra;
    valorExtra = 0;
    
    printf("\n Primeiro valor: %d \n Segundo valor: %d", Valor1, Valor2);
    
    return 0;
}