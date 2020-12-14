#include <stdio.h>

 #include <stdlib.h>

 void main() {

 	int i=1, n, soma=0;
 	printf("Informe o numero n: ");
	scanf("%d", &n);

	while (i <= n) {

	soma += i;
	i++;

 }
	printf("Soma: %d \n", soma);

 }
