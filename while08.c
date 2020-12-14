#include <stdio.h>
#include <stdlib.h>

void main() {

	int op;
	float num, soma, prod;

	do {

		printf("1-Soma varios numeros\n");
		printf("2-Multiplica varios numeros\n");
		printf("3-Encerrar o programa\n");
		printf("Opcao:");
		scanf("%d", &op);

		if (op == 1) {
			soma = 0;
			printf("\n Digite numero ou -999 para finalizar:");
			scanf("%f", &num);

			while (num != -999) {

				soma += num;
				printf("\n Digite numero ou -999 para finalizar:");
				scanf("%f", &num);
		}

			printf("\n Soma: %f \n", soma);

		} else if (op == 2) {

			prod = 1;
			printf("\n Digite numero ou -999 para finalizar:");
			scanf("%f", &num);

				while (num != -999) {
					prod *= num;
					printf("\n Digite numero ou -999 para finalizar:");
					scanf("%f", &num);
				}

				printf("\n Produto: %f \n", prod);
			} else if (op == 3) {

			printf("\n Programa encerrado!");
			} else {

 				printf("\n Opcao nao disponivel!");
			}

	} while (op != 3);

 }
