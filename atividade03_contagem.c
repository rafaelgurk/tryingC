/* 
Construa um programa em C que leia vários números e informe quantos números
entre 100 e 200 foram digitados. Quando o valor 0 (zero) for lido, o algoritmo
deverá cessar sua execução
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
	
	//variaveis
    float num;
    int contador=0;
    
    //logica
    while(num != 0){
        printf("Número [0 para sair]>: ");
        scanf("%f", &num);
        if(num >= 100 && num <= 200){
            contador++;
        }
    }
	
	//mensagem final
    printf("Quantidade informada entre 100 e 200>: %d", contador);

return 0;
}

