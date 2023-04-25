#include <stdio.h>
#include <stdlib.h>

#include "binaire.h"

int main(int argc, char **argv){
    int nombre[N];
    int n=0;
    int longueur=0;                                                                                                          
    printf("Entrez un nombre entier: ");
    scanf("%d",&n);    

    decompose_binaire(n,nombre,&longueur); 
    affiche_binaire(nombre,longueur);

    system("pause");
    return 0;
}