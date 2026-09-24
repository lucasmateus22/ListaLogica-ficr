#include <stdio.h>

int main() 
{
    char classe;
    float consumo, tarifa, vf, icms, vp;

    printf("Informe a classe consumidora (A, B ou C): ");
    scanf(" %c", &classe);

    if (classe == 'A' || classe == 'a') {
        tarifa = 0.5;
    } 
    else if (classe == 'B' || classe == 'b') {
        tarifa = 0.8;
    } 
    else if (classe == 'C' || classe == 'c') {
        tarifa = 1.0;
    } 
    else {
        printf("Classe consumidora inválida!\n");
        return 0; 
    }
    printf("Informe o consumo em kWh: ");
    scanf("%f", &consumo);

    if (consumo < 0) {
        printf("O consumo não pode ser negativo!\n");
        return 0;
    }

    vf = consumo * tarifa;
    icms = 0.30 * vf;
    vp = vf + icms; 
  
    printf("\n--- Resumo da Conta \n");
    printf("Valor do Fornecimento (VF): R$ %.2f\n", vf);
    printf("ICMS (30%%):                 R$ %.2f\n", icms);
    printf("Valor a Pagar (VP):         R$ %.2f\n", vp);

    return 0;
}
