#include <stdio.h>

int main()
{
    int numCompra;
    float precoMaca;

    printf("Quantas maças você deseja comprar? ");
    scanf("%d", &numCompra);

    if (0 > numCompra < 12)
    {
        precoMaca = 0.30;
    }
    else if (numCompra >= 12)
    {
        precoMaca = 0.25;
    }
    
    float valorTotal = precoMaca * numCompra;

    printf("O valor total da compra foi: %.2f", valorTotal);

}