#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void main(){
	//declaracao de variaveis
	float altura, psoIdeal;
	char sexo;
	
	//coleta de informacoes
	printf("Informe sua altura> ");
	scanf("%f", &altura);
	printf("Informe seu sexo [m/f]> ");
	scanf(" %c", &sexo);
	
	//processamento de dados
	if (sexo == 'M' || sexo == 'm'){	
		psoIdeal = (72.7 * altura) - 58;
		printf("Seu peso ideal e>> %.2f", psoIdeal);
	} else {
		psoIdeal = (62.1 * altura) - 44.7;
		printf("Seu peso ideal e>> %.2f", psoIdeal); 
	}
		
}
