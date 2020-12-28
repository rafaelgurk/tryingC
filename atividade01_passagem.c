/*
reservas passagem aerea: 10 voos (codigo) / quantidades de lugares
cadastrar identidade usuario e voo desejado
atualizar quantidade de lugares disponiveis para voo desejado
codigo == 0 finaliza programa
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	
	//definicao variaveis
	int voo[10], lugares[10];
	int i=0, reserva=0, identidade=0;
	printf("===========\n");
	
	//armazenamento codigo dos voos e vagas
	for(i=1; i<=10; i++){
		printf("VOO %d: ", i); scanf("%d", &voo[i]);
		printf("VAGAS VOO %d: ", voo[i]); scanf("%d", &lugares[i]);
	}
	printf("===========\n");
		
	//informacoes clientes atualizacao de sistema  
	do{	
		printf("\nIDENTIDADE CLIENTE: "); 
		scanf("%d", &identidade);
		printf("RESERVA VOO [0 P/ SAIR]: "); 
		scanf("%d", &reserva);
		for(i=1; i<=10; i++){
			if(reserva == voo[i]){
				if(lugares[i] == 0){
					printf("\n\nVOO ESTA LOTADO TENTE NOVAMENTE MAIS TARDE...\n===========");
				} else {
					printf("\nCLIENTE %d CONFIRMADO NO VOO %d\n===========\n", identidade, voo[i]);
					lugares[i]--;
				}
			}		
		}
		for(i=1; i<=10; i++){
			printf("\nvoo: %d vagas %d", voo[i], lugares[i]);
		}
	} while(reserva != 0);
	printf("\n\n===========\nFINALIZANDO....");
return 0;
}
