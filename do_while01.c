#include <stdio.h>
#include <stdlib.h>

int main(){
	int i, x, resp;

	printf("Informe o inicio da contagem> ");
	scanf("%d", &x);

	do{
		for(i=0; i<5; i++){
			printf("> %d\n", x);
			x += 1;
		}

        printf("======x======x======\n");
	    printf("[1]Continuar\n[2]Sair\n");
	    scanf("%d", &resp);
        printf("======x======x======\n");

	} while (resp == 1);
return 0;
}
