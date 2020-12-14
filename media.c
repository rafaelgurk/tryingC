#include <stdio.h>
#include <stdlib.h>

void main(){

    float nota1, nota2, media;
    char prova;

    printf("Voce perdeu alguma prova [S/N]? ");
    scanf("%c", &prova);

    printf("Primeira nota: ");
    scanf("%f", &nota1);
    printf("Segunda nota: ");
    scanf("%f", &nota2);

    media = (nota1+nota2)/2;

    printf("\nAlguma prova foi perdida? %c", prova);
    printf("\nPrimeira nota: %.1f", nota1);
    printf("\nSegunda nota: %.1f", nota2);


    printf("\n\nMedia -> %.1f", media);

}
