#include <stdio.h>
#include <stdlib.h>

int calculo_mdc(int a, int b){
    int c = a % b;
    if(c == 0){
        return b; 
    } else {
        return calculo_mdc(b,c);
    }
}

int main(){
    int x, y, result;
    printf("Informe x e y: "); 
    scanf("%d %d", &x, &y);
    
    result = calculo_mdc(x,y);

    printf("\nMDC = %d", result);
return 0;
}