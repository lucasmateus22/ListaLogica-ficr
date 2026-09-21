#include <stdio.h>

int main()
{
    int quantidadeCedulas = 100;
    int valorSaque;
    printf("Quanto deseja sacar? ");
    scanf("%d", &valorSaque); 
    
    int cedDuz = valorSaque / 200;
    valorSaque = valorSaque % 200;
    
    int cedCem = valorSaque / 100;
    valorSaque = valorSaque % 100;
    
    int cedCinq = valorSaque / 50;
    valorSaque = valorSaque % 50;
    
    int cedvin = valorSaque / 20;
    valorSaque = valorSaque % 20;
    
    int cedDez = valorSaque / 10;
    valorSaque = valorSaque % 10;
    
    int cedCinc = valorSaque / 5;
    valorSaque = valorSaque % 5;
    
    int cedDoi = valorSaque / 2;
    valorSaque = valorSaque % 2;
    
    int cedUm = valorSaque / 1;
    valorSaque = valorSaque % 1;
    
    int soma = cedDoi + cedCinc + cedDez + cedvin + cedCinq + cedCem + cedDuz + cedUm;
    int quantCedulasRetiradas = quantidadeCedulas - soma;
    printf("Foram retiradas %d células\n", soma);
    printf("Quantidade de cédulas a receber:\n"
       "R$ 200: %d\n"
       "R$ 100: %d\n"
       "R$ 50:  %d\n"
       "R$ 20:  %d\n"
       "R$ 10:  %d\n"
       "R$ 5:   %d\n"
       "R$ 2:   %d\n"
       "R$ 1:   %d\n",
       cedDuz, cedCem, cedCinq, cedvin, cedDez, cedCinc, cedDoi, cedUm);
    printf("Sobraram %d células", quantCedulasRetiradas);
    return 0;
}