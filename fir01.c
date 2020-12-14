#include <stdio.h>
 #include <stdlib.h>
 void main(){
    float num, soma=0, media=0;
    int qtdeNum, i;
    printf("Informe a quantidade de numeros:");
    scanf("%d", &qtdeNum);

    //inicio do laco for
    for (i=1; i<=qtdeNum; i++){
    //a partir deste ponto sao as instrucoes
    //que devem ser executadas nas iteracoes
    printf("Informe o numero:");
    scanf("%f", &num);
    soma += num;
}

    //a media deve ser calculada apos a iteracao
    media = soma / qtdeNum;
    printf("A media e: %f", media);

}
