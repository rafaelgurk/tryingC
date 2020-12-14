#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL, "pt-br");

	int num =0, i=0, aux=0, posicao=0;
	int vetor[10];

	// usuario informa valor a ser detectado
	printf("Informe valor a ser detectado>> ");
	scanf("%d*[^\n]", &num);

	// leitura de valores aleatorios -array-
	for(i=1; i<=10; i++){
		printf("Informe %d valor do array>> ", i);
		scanf("%d", &vetor[i]);
	}

    // identifica no vetor valor digitado e seleciona sua posicao
    for(i=1; i<=10; i++){
        printf("\n%d ", vetor[i]);
        if(vetor[i] == num){
            aux++;
            if(aux == 1){
                printf("<- ");
                posicao = i;
            }
        }
    }

    //informa 1 posicao do valor desejado
    if(aux == 0){
		printf("\nValor pedido não informado pelo vetor");
	} else {
		printf("\nPrimeiro valor informado detectado na posicao>> %d", posicao);
	}

return 0;
}
