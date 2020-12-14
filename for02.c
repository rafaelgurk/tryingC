#include <stdio.h>
#include <stdlib.h>

void main(){
    float num, soma=0, media=0;
    int i;

    //inicio do laco for
    for(i=1; i<=10; i++){

    //a partir deste ponto sao as instrucoes
    //que devem ser executadas nas iteracoes
    printf("Informe o numero:");
    scanf("%f", &num);
    soma += num;
 }
    //a media deve ser calculada apos a iteracao
    media = soma / 10;
    printf("A media e: %f", media);
}
