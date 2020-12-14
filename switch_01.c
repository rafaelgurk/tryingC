#include <stdio.h>
#include <stdlib.h>

int main(){
	int x;
	
	printf("[1 - 2 - 3 - 4]\n"); 
	scanf("%d", &x);
	
	switch(x){
		case 1:
			printf("Você escolheu 1");
		break;
		case 2:
			printf("Você escolheu 2");
		break;
		case 3:
			printf("Você escolheu 3");
		break;
		case 4:
			printf("Você escolheu 4");
		break;		
		
		default:
			printf("Inválido!");
	}
	
return 0;
}