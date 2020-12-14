#include <stdio.h>
#include <stdlib.h>

int recursiv(int x){
    if(x > 1){
        return x * recursiv(x-1);
    } else {
        return x;
    }
}

int main(){
    int i, a, result;
    printf("informe valor: "); scanf("%d", &a);
    result = recursiv(a);

    //for(i=a;i>0;i--){
        printf("\n%d", result);
    //}

return 0;
}