#include <stdio.h>
#include <stdlib.h>

void main(){
	int n, mult, res;
	printf("Informe um valor> ");
	scanf("%d", &n);
	if (n > 20){
		mult = 2;
		res = n * mult;		
	}else{
		mult = 4;
		res = n * mult;
	}
	printf("%d * %d = %d", n, mult, res);
}

