#include <stdio.h>

int main()

{
    int first;
    int second;
    
    printf("Entre com o primeiro n°");
    scanf("%d", &first);
    printf("Entre com o segundo n°");
    scanf("%d", &second);
    
    int result = first * second;
    
    printf("A multiplicação é: %d\n", result);
}


