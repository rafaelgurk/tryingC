#include <stdio.h>
#include <stdlib.h>

void main() {

	int conTempo = 0;
	float massa, tempo;
	char resp;

	printf("Digite S se desejar novo calculo ou qualquer letra para terminar:");
	scanf("%c", &resp);

		while (resp == 'S' || resp == 's') {

			printf("Digite a massa em gramas do material:");
			scanf("%f", &massa);

			while (massa >= 0.10) {

				conTempo++;
				massa *= 0.75;
			}#include <stdio.h>
#include <stdlib.h>

void main() {

	int num;

	do {
		printf("\n Digite um numero ou multiplo de 6 para encerrar:");
		scanf("%d", &num);
		printf("Quadrado: %d \n", num * num);

 	} while ((num % 6) != 0);
 }
