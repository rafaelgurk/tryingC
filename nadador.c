#include <stdio.h>
#include <stdlib.h>

int main(){
	//declaracao de variaveis
	int idade;
	
	//coleta de informacoes
	printf("Informe sua idade para avaliacao>> ");
	scanf("%d", &idade);
	
	//exibicao de dados trabalhados
	if (idade >= 5 && idade <= 7){
		printf("Nadador de categoria -> INFANTIL A");
	} else if (idade >= 8 && idade <= 10){
		printf("Nadador de categoria -> INFANTIL B");
	} else if (idade >= 11 && idade <= 13){
		printf("Nadador  de categoria -> JUVENIL A");
	} else if (idade >= 14 && idade <= 17){
		printf("Nadador de categoria -> JUVENIL B");
	} else {
		printf("Nadador de categoria -> SENIOR");
	}
	
	
return 0;
}
