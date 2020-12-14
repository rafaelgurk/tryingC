#include <stdio.h>
#include <stdlib.h>

void main(){
	int cargo;
	float reaj, sal;
	
	//Registro de valores
	printf("Informe seu cargo\nAuxiliar de Escritorio [1]\nSecretario(a) [2]\nCozinheiro(a) [3]\nEntregador(a) [4]\n>> ");
	scanf("%d", &cargo);
	printf("Informe seu salario> R$");
	scanf("%f", &sal);
	
	//Tratametno de variaveis
	if (cargo == 1){
		reaj = (sal * 7)/100;
	}else if (cargo == 2){
		reaj = (sal * 9)/100;
	}else if (cargo == 3){
		reaj = (sal * 5)/100;
	}else{
		reaj = (sal * 12)/100;
	}
	//Exibir resultados
	printf("Reajuste>> %.2f", reaj);
	printf("\nSalario atualizado>> %.2f", sal+reaj);
}
