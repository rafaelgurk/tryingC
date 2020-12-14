#include <stdio.h>
#include <stdlib.h>

void main() {

	int num;

	do {
		printf("\n Digite um numero ou multiplo de 6 para encerrar:");
		scanf("%d", &num);
		printf("Quadrado: %d \n", num * num);

 	} while ((num % 6) != 0);
 }
