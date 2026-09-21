#include <stdio.h>

int main()
{
    int raio;
    float pi = 3.14159;
    
    printf("Entre com o valor do raio: ");
    scanf("%d", &raio);
    
    float areaCirc = (float)pi * (raio * raio);
    
    printf("%.2f", areaCirc);

    return 0;
}
