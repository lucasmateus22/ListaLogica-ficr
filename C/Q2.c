#include <stdio.h>

int main()

{
    int result;   
    printf("diga um n°");
    scanf("%d", &result);

    int antecessor = result - 1;
    int sucessor = result + 1;
       
    printf("O antecessor é: %d\n", antecessor);
    printf("O sucessor é: %d\n", sucessor);
}


