/* #include<stdio.h>
#include <stdlib.h>
#include <time.h>

#include "histogramme.h"

int genere_entier(int lim);
void genere_tableau(int tab[], int taille, int lim);

int main(int argc, char **argv){
    int entier = 0;
    int nombreAleatoire = 0;
    int size = 0;

    printf("Entrez une valeur entiere positive grande: \n \t\t %c",175);
    scanf("%d",&entier);
    if(entier < 0){
        entier = -1*entier;
    }

    printf("Entrez une taille pour le tableau: \n \t\t %c",175);
    scanf("%d",&size);
    if(size < 0){
        size = -1*size;
    }
    int tab[size];
    genere_tableau(tab,size, entier);
    affiche_tableau(tab,size);
    system("pause");
    return EXIT_SUCCESS;
}

int genere_entier(int limite){
    return (rand()%(limite+1));
}

void genere_tableau(int tab[], int size, int lim){
    srand(time(NULL));
    for(int i=0; i< size; i++){
        tab[i] = genere_entier(lim);
    }
} */