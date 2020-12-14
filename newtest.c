#include <stdio.h>
#include <stdlib.h>

void main(){

    int n1=0, n2=0;

    printf("Digite o primeiro valor: ");
    scanf("%d", &n1);
    printf("Digite o segundo valor: ");
    scanf("%d", &n2);

    printf("n1: %d\nn2: %d", n1, n2);

    printf("\n n1 e n2 são iguais? %d", n1 == n2);
    printf("\n n1 é maior que n2? %d", n1 > n2);
    printf("\n n1 é menor ou igual a n2? %d", n1 <= n2);

}
