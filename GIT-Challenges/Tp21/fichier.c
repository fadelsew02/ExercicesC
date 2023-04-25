#include<stdio.h>
#include <stdlib.h>

#include "fichier.h"

void affiche_cl(int m[n][n]){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            printf(" %d ",m[i][j]);
        }
        printf("\n");
    }
}

void genere_cl_permutation(int m[n][n]){
    int a=0, x=-1;
    for (int i = 0; i < n; i++){
        x++;
        a=x;
        for (int j = 0; j < n; j++){
            if(a == n){
                a=0;
            }
            m[i][j] = a;
            a++;
        }
    }
    affiche_cl(m);
}

void initialise_ronds_vecteur(t_symbole tab[n]){
    for (int i = 0; i < n; i++){
        tab[i] = rond;
    }
}


int compte_ronds_vecteur(t_symbole tab[n]){
    int NbreRonds=0;
    for (int i = 0; i < n; i++){
        if(tab[i] == rond){
            NbreRonds++;
        }
    }
    return NbreRonds;
}

int contient_rond_vecteur(t_symbole tab[n]){
    if (compte_ronds_vecteur(tab) > 0){
        return 1;
    }
    return 0;
}

int teste_vecteur(int m[n][n], int pos, int ligne){
    int tab[n] = {rond};
    if(ligne == 1){
        for(int i=1; i<n; i++){
            if(m[pos][i] != m[pos][i-1]){
                tab[i-1] = croix;
            }
        }
    }else{
        for(int i=0; i<n; i++){
            if(m[i][pos] != m[i][pos]){
                tab[i-1] = croix;
            }
        }
    }

    for(int i=0; i<n; i++){
        if(tab[i] == rond){
            return 0;
        }
    }
    return 1;
}