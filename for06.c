#include <stdio.h>
#include <stdlib.h>

void main(){
    int c, i;

    //inicio primeiro for
    for(i=1; i<=4; i++){
        //inicio segundo for
        for(c=1; c<=4; c++){
            if (c<4){
                printf("%d \t", c*i);
            } else {
                printf("%d \n", c*i);
            }
        }
    }
}
