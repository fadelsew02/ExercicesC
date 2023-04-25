#include <stdio.h>
#include <stdlib.h>

#include "binaire.h"

void affiche_binaire(int nombre[N], int longueur){
    printf("(");
    for(int i=N; i>0; i--){
        printf("%d",nombre[i]);
        if(i%9 == 0 || i%9 == 5){
            printf(" ");
        }
    }
    printf(")_2");
}