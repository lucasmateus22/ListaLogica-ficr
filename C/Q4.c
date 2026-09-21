#include <stdio.h>

int main()

{
    int itemUmQ4;
    int itemDoisQ4;
    
    printf("Entre com o primeiro número: ");
    scanf("%d", &itemUmQ4);
    printf("Entre com o segundo número: ");
    scanf("%d", &itemDoisQ4);
    
    int somaQ4 = itemUmQ4 + itemDoisQ4;
    int produtoQ4 = itemUmQ4 * itemDoisQ4;
    float quocienteQ4 = (float)itemUmQ4 / itemDoisQ4;
    
    printf("A soma: %d\n", somaQ4);
    printf("O produto: %d\n", produtoQ4);
    printf("O quociente: %.2f\n", quocienteQ4);
}


