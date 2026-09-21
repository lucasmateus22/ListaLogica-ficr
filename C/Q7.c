#include <stdio.h>

int main()
{
    int raio;
    float pi = 3.14159;
    
    printf("Entre com o valor do raio: ");
    scanf("%d", &raio);
    
    float areaCirc = (float)pi * (raio * raio);
    
    printf("A área é: %.2f\n", areaCirc);
    
    int altura;
    
    printf("Entre com a altura do Cilindro: ");
    scanf("%d", &altura);
    
    float VolumeCilind = (float)areaCirc * altura;
    
    printf("O volume é: %.2f", VolumeCilind);
    
    return 0;
}