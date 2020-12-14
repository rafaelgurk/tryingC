#include <stdio.h>
#include <stdlib.h>

int main(){
	float lado, altura, area;
	int resp = 1;
	
	do{
		printf("Informe primeira metragem do terreno> "); 
		scanf("%f", &lado);
		printf("Informe a segunda metragem do terreno> ");
		scanf("%f", &altura);
		area = lado*altura;
		printf("O terreno informado possui> %.1fm²", area);
		
		printf("\nContinuar? \n[1 Sim] ~ [2 Nao]\n");
		scanf("%d", &resp);
	} while (resp == 1);
	printf("Obrigado");
return 0;
}