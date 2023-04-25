#include<stdio.h>
#include <stdlib.h>

#include "fichier.h"

int main(int argc, char **argv){

    // int n=0;

    // printf("Entrez la taille de votre carre latin: ");
    // scanf("%d",&n);

    int m[n][n];
    int a=0;

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            m[i][j] =a;
            a++;
        }
    }

    affiche_cl(m);

    int ret = teste_vecteur(m,5,1);
    printf("\n Le retour est : %d \n", ret);
    system("pause");
    return 0;
}
