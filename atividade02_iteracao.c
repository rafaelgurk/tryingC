/* 
Façaa um programa que permita entrar com o nome e o salario bruto de 10 pessoas. 
Apos ler os dados, imprimir o nome e o valor da aliquota do imposto de renda 
calculado conforme a tabela a seguir
> 1300 isento
>= 1300 < 2300 -10%
>= 2300 -15% 
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    
    //definicao variaveis
	char nome[10][50];
    float salario[10];
    int i;

	//coleta informacoes
    for(i=0; i<10; i++){
        printf("Nome>: ");
        scanf(" %s", nome[i]);
        printf("Salario de %s>: R$", nome[i]);
        scanf("%f", &salario[i]);
    }
	printf("==============");
	//trabalho informacoes
	for(i=0; i<10; i++){
		if(salario[i] < 1300){
			printf("\n %s SALARIO %.2f ALIQUOTA 0%%", nome[i], salario[i]);
			printf("\n---");
		} else if(salario[i] >= 1300 && salario[i] < 2300){
			printf("\n %s SALARIO>: %.2f ALIQUOTA 10%% : REAJUSTE %.2f", nome[i], salario[i], salario[i]-(salario[i]*0.1));
			printf("\n---");
		} else {
			printf("\n %s SALARIO>: %.2f ALIQUOTA 15%% : REAJUSTE %.2f", nome[i], salario[i], salario[i]-(salario[i]*0.15));
			printf("\n---");
		}
	}

return 0;
}
