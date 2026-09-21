#include <stdio.h>

int main()
{
    int valor;
    printf("Entre com o valor: \n");
    scanf("%d", &valor);
    
    if(valor > 0) {
        printf("Positivo");
    } else if (valor < 0){
        printf("Negativo");
    } else{
        printf("É zero");
    } 
}