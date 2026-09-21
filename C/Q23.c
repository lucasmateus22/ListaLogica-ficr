#include <stdio.h>

int main()
{
    int a;
    int b;
    int c;
    int d;

    printf("entre com o valor de A: ");
    scanf("%d", &a);

    printf("entre com o segundo valor de B: ");
    scanf("%d", &b);

    printf("entre com o segundo valor de C: ");
    scanf("%d", &c);

    int d = (b*b) - (4*a)*(4*c);
    int DigualZero = -b / a**;
    int DpositivoSoma = -b / a**;
    int DpositivoSub = -b / a**;

    if (d < 0) {
        printf("%d é negativo, então a operação se encerra aqui", d);
    } else if (d == 0) {
        printf("%d", DigualZero);
    } else if (d > 0){
        printf("%d", DpositivoSoma);
    }

}
