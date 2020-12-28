/* 
Fa�a um programa que leia v�rios n�meros inteiros e apresente o fatorial de cada
n�mero. O algoritmo encerra quando se digita um n�mero menor do que 1.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	// variaveis
	int i, aux, op=1;
	double num;
	
	// calculo fatorial
	while(op > 0){
		printf("numero [0 para sair]>: "); 
		scanf("%lf", &num);
		if(num==0){
			break;
		}
		op=num;
		aux = num-1;
		printf("%.0lf! = ", num);
		for(i=num; i>0; i--){
			num *= aux;
			if(aux > 1)
				aux--;
		}
		printf("%.0lf\n", num);
	}
	printf("Finalizado....");
return 0;
}
