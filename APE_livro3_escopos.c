#include <stdio.h>
#include <stdlib.h>
int x; // pode ser usada em qualquer funcao com o valor predeterminado ou lido posteriormente

int teste(){
    int x=25;

    return x;
}

int main(){
    // nao ha necessidade de declaracao de variavel x dentro da funcao

    printf("informe valor de x: "); scanf("%d", &x);
    printf("valor informado ao quadrado = %d", x*2);

    x = teste();
    printf("\nvalor x na funcao teste = %d", x);

    return 0;
}