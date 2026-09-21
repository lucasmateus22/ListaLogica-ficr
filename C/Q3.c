#include <stdio.h>

int main()

{
    int itemUmQ3;
    int itemDoisQ3;
    
    printf("Entre com o primeiro número: ");
    scanf("%d", &itemUmQ3);
    printf("Entre com o segundo número: ");
    scanf("%d", &itemDoisQ3);
    
    float resultQuociente = (float)itemUmQ3 / itemDoisQ3;
    printf("O quonciente é: %.2f\n", resultQuociente);
    
    int resultResto = itemUmQ3 % itemDoisQ3;
    printf("O resto é: %d\n", resultResto);
}


