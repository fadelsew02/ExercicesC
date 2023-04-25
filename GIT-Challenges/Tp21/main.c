#include<stdio.h>
#include <stdlib.h>

#include "fichier.h"

int main(int argc, char **argv){

    int n=0;

    printf("Entrez la taille de votre carre latin: ");
    scanf("%d",&n);

    int m[n][n];

    affiche_cl(m);
    system("pause");
    return 0;
}
