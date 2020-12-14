#include <stdio.h>
#include <stdlib.h>

int main(void){
    int cont;
    printf("INFORME UM VALOR > 1 PARA CONTAGEM>> ");
    scanf("%d", &cont);
    for(cont;cont>=1;cont--){
        printf("%d\n", cont);
    }

return 0;
}