#include <stdio.h>
#include <stdlib.h>

void main(){
	int destino, trecho;
	printf("Informe o destino conforme a tabela a seguir: \n");
	printf("1-Regiao Norte \t 3-Regiao Centro-oeste \n");
	printf("2-Regiao Nordeste \t 4-Regiao Sul \n");
	scanf("%d", &destino);
	
	printf("Informe o trecho: <1-IDA ou 2-IDA E VOLTA> ");
	scanf("%d", &trecho);
	
	if (destino == 1) {
		if (trecho == 1){
			printf("Regiao norte[IDA] = R$500.00");
		} else {
			printf("Regiao norte[IDAE E VOLTA] = R$900.00");
		}
	} else if (destino == 2){
		if (trecho == 1){
			printf("Regiao nordeste[IDA] = R&350.00");
		} else {
			printf("Regiao nordeste[IDAE E VOLTA] = R$650,00");
		}
	} else if (destino == 3){
		if (trecho == 1){
			printf("Regiao centro-oeste[IDA] = R$350.00");
		} else {
			printf("Regiao centro-oeste[IDA E VOLTA] = R$600.00");
		}
	} else {
		if (trecho == 1){
			printf("Regiao sul[IDA] = R$300.00");
		} else {
			printf("Regiao sul[IDA E VOLTA] = R$ = 550.00");
		}
	}
}
