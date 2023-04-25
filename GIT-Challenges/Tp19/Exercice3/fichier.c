#include<stdio.h>
#include<stdlib.h>

#include "Exercice2.h"

void initialise_permutation(t_entier_girouette tab[], int n){
    for (int i = 0; i < n; i++){
        tab[i].valeur = i+1;
        tab[i].girouette = gauche;
    }
    
}
    
