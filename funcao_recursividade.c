#include <stdio.h>
#include <stdlib.h>

int recursiv(int x){
    if(x > 1){
        return x * recursiv(x-1);
    } else {
        return x = 1;
    }
}

int main(){
    int a, result;
    printf("informe valor positivo: "); scanf("%d", &a);
    result = recursiv(a);
    
    printf("%d! = %d", a, result);

return 0;
}