#include <stdio.h>

int main()
{
    int valor1;
    int valor2;
    int operacao;
    printf("entre com o primeiro valor: ");
    scanf("%d", &valor1);

    printf("entre com o segundo valor: ");
    scanf("%d", &valor2);

    printf("Escolha qual operação fazer: \n");
    printf("1 - Adição \n2 - Subtração \n3 - Divisão \n4 - Multiplicação \n");
    scanf("%d", &operacao);
    
    int soma = valor1 + valor2;
    int subtr = valor1 - valor2;
    int divis = valor1 / valor2;
    int multp = valor1 * valor2;
    
    if(operacao == 1) {
        printf("%d", soma);
    } else if (operacao == 2) {
        printf("%d", subtr);
    } else if (operacao == 3) {
        printf("%d", divis);
    } else if (operacao == 4) {
        printf("%d", multp);
    } else {
        printf("Valor inválido");
    }
}
