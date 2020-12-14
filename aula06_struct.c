#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Definir struct
struct funcionario {
	char nome[55];
	int codigo;
	int idade;
	float salario;
};

int main(void){
	struct funcionario function1, function2;
	
	//Atribuicao de dados function1;
	strcpy(function1.nome, "Topogigio");
	function1.idade = 62;
	function1.codigo = 0021;
	function1.salario = 1889.90;
	
	//Imprimir informacoes da function1;
	printf("=====x=====x==========x=====x==========x=====x=====\n");
	printf("Nome funcionario(a) 1>> %s \n", function1.nome);
	printf("Codigo de %s>> %d \n", function1.nome, function1.codigo);
	printf("Idade de %s>> %d \n", function1.nome, function1.idade);
	printf("Salario de %s>> US$%.2f \n", function1.nome, function1.salario);
	
	//Coleta de dados function2;
	printf("\n=====x=====x==========x=====x==========x=====x=====\n");
	printf("\nInforme o codigo do funcionario>> ");
	scanf("%d", &function2.codigo);
	printf("Informe o nome do funcionario(a)>> ");
	scanf(" %s", &function2.nome);
	printf("Informe a idade do funcionario %s>> ", function2.nome);
	scanf("%d", &function2.idade);
	printf("Qual o salario de %s>> R$", function2.nome);
	scanf("%f", &function2.salario);

	//Exibir informaçoes function2;
	printf("\n=====x=====x==========x=====x==========x=====x=====\n");
	printf("Funcionario 2>> %s \n", function2.nome);
	printf("Codigo de %s>> %d \n", function2.nome, function2.codigo);
	printf("Idade de %s>> %d \n", function2.nome, function2.idade);
	printf("Salario de %s>> %.2f", function2.nome, function2.salario);

}