#include <stdio.h>
#include <stdlib.h>

void main(){
    float salbruto=0, vt=0.06, sf=0.02;

    printf("Valor do salário bruto: R$");
    scanf("%f", &salbruto);
    //DESCONTOS
    printf("\nVT 6%% de %.2f = %.2f", salbruto, salbruto*vt);
    printf("\nSF 2%% de %.2f = %.2f\n", salbruto, salbruto*sf);

    //SALARIOS COM DESCONTOS APLICADOS
    printf("\nSALARIO COM DESCONTO VT: R$%.2f", salbruto-(salbruto*vt));
    printf("\nSALARIO COM DESCONTO SF: R$%.2f\n", salbruto-(salbruto*sf));
    printf("\nSALARIO COM AMBOS DESCONTOS APLICADOS: R$%.2f", salbruto-((salbruto*vt)+(salbruto*sf)));

}
