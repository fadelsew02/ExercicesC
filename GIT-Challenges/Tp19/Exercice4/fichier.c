#include<stdio.h>
#include<stdlib.h>

#include "Exercice2.h"

void initialise_permutation(t_entier_girouette tab[], int n){
    for (int i = 0; i < n; i++){
        tab[i].valeur = i+1;
        tab[i].girouette = gauche;
    }
}

void affiche_permutation(t_entier_girouette tab[], int n){
    for (int i = 0; i < n; i++){
        if(tab[i].girouette == gauche){
            printf(" <- ");
        }else{
            printf(" -> ");
        }
    }
    printf("\n");
    for (int i = 0; i < n; i++){
        printf(" %2d ",tab[i].valeur);
    }
    
    
}
    
