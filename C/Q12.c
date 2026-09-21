#include <stdio.h>

int main()
{
    int mediaArit = (7 + 8 + 9) / 3;
    printf("média aritmética dos números 7, 8 e 9: %d\n", mediaArit);
    
    int media = (4 + 5 + 6) / 3;
    printf("média dos números 4, 5 e 6: %d\n", media);
    
    int soma = mediaArit + media;
    printf("Soma de ambos: %d\n", soma);
    
    return 0;
}