#include <stdio.h>
#include <stdlib.h>

void main(){
	//declaracao de variaveis
	int idade;
	
	//coleta de informacoes
	printf("Informe sua idade>> ");
	scanf("%d", &idade);
	
	//impressao de dados 
	if (idade <= 17){
		printf("Menor de idade!!");
	} else if (idade >= 18 && idade <= 65){
		printf("Maior de idade!!");
	} else {
		printf("Mais de 65 anos!!");
	}
}

