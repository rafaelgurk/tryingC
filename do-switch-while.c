#include <stdio.h>
#include <stdlib.h>
main()
{
float soma=0;
float valor;
int opcao;
do {
printf("\n Digite uma Operacao");
printf("\n 1. Deposito");
printf("\n 2. Saque");
printf("\n 3. Saldo");
printf("\n 4. Sair");
printf("\n Opcao? ");
scanf("%d", &opcao);
switch(opcao) {
     case 1: printf("\n Valor do deposito? ");
             scanf("%f", &valor);
             soma=soma+valor;
             break;
     case 2: printf("\n Valor do saque? ");
             scanf("%f", &valor);
             soma=soma-valor;
             break;
     case 3: printf("\n Saldo atual = R$ %.2f \n", soma);
             break;
     default: if(opcao!=4)
printf("\n Opcao Invalida! \n");
}
}
while (opcao!=4);
     printf("Fim das operacoes. \n\n");
     system("pause");
     return 0;
}
