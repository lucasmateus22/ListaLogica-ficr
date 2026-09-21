#include <stdio.h>

int main()
{
    float valorCarro;
    printf("Entre com o valor de fábrica do carro: \n");
    scanf("%2f", &valorCarro);
    
    float valorFinal = valorCarro * 1.73;
    
    printf("O valor final é de: %2f", valorFinal);
    
    return 0;
}