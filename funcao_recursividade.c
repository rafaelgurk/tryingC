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
    
<<<<<<< HEAD
    printf("%d! = %d", a, result);

=======
        printf("\n%d", result);
    
>>>>>>> 87b96a2542b3b45efcbe295f5b32cdb042b1ee54
return 0;
}
