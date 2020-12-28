/*
Em uma Universidade, os alunos das turmas de informática fizeram uma prova
de algoritmos. Cada turma possui um número de alunos. Criar um programa que
imprima:
• quantidade de alunos aprovados;
• média de cada turma;
• percentual de reprovados.
Obs.: Considere aprovado com nota >= 7.0
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int turma, op, alunos, i, aprovados=0;
	float notas, media, reprovados=0;
	
	do{
		turma=alunos=aprovados=notas=media=reprovados=0;
		printf("================\n");
		printf("NUMERO DA TURMA>: ");
		scanf("%d", &turma);
		printf("QUANTIDADE DE ALUNOS TURMA %d >: ", turma);
		scanf("%d", &alunos);
		printf("================\n");
		
		for(i=1; i<=alunos; i++){
			printf("NOTA %d° ALUNO>: ", i);
			scanf("%f", &notas);
			media += notas;
			if(notas >= 7){
				aprovados++;
			}
		}
		printf("================\n");
		media = media/alunos;
		reprovados = 100-((aprovados*100)/alunos);
		printf("\nTOTAL ALUNOS>: %d\nAPROVADOS>: %d", alunos, aprovados);
		printf("\nMEDIA TURMA %d>: %.1f",turma, media);
		printf("\nPERCENTUAL REPROVADOS>: %.1f%%", reprovados);
		printf("\n================\n");
		printf("\n[1] CONTINUAR \n[2] SAIR\n->");
		scanf("%d", &op);	
	} while(op != 2);
	
	printf("FINALIZANDO...");
return 0;
}
