#include <stdio.h>
#include <stdlib.h>

void main(){

	int conta, cTotNeg=0, cTot=0;
	float saldo, soma=0;
	char nome[30];

	printf("Digite o numero da conta ou -999 para terminar:");
	scanf("%d", &conta);

	while (conta > 0 && cTot < 10000){

	cTot++;
	printf("Nome:");
	scanf("%s", &nome);

	printf("Saldo:");
	scanf("%f", &saldo);

	soma += saldo;

	if (saldo < 0) {

		cTotNeg++;
		printf("%d - %f - negativo \n", conta, saldo);

 	} else {

		printf("%d - %f - positivo \n", conta, saldo);
	}

	printf("Digite o numero da conta ou -999 para terminar:");
	scanf("%d", &conta);

 }

	printf("\n Total de clientes com saldo negativo: %d", cTotNeg);
	printf("\n Total de clientes da agencia: %d", cTot);

 }
