#include <stdio.h>

int main()
{
    float salario;
    float vendas;
    
    printf("Entre com o valor do salario: ");
    scanf("%f", &salario);
    
    
    printf("Valor em vendas: ");
    scanf("%f", &vendas);
    
    float salarioFinal = salario + (vendas *  0.15);
    
    printf("O salário é: %.2f\n", salario);
    printf("O salário final é: %.2f", salarioFinal);
    
    return 0;
}