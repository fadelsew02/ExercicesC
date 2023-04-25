#include<stdio.h>
#include <stdlib.h>

#include "fichier.h"

void affiche_cl(int m[n][n]){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            printf(" %2d ",m[i][j]);
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



int teste_vecteur(int m[n][n], int pos, int ligne){
    t_symbole tab[n];
    int n_est_pas_duplique=0;

    for(int i=0; i<n; i++){
        tab[i]=rond;
    }

    if(ligne == 1){
        for(int i=0; i<n-1; i++){
            for(int j=i+1; j<n; j++){
                if(m[pos][i] != m[pos][j]){
                    tab[i] = croix; 
                }
            }
        }
    }else{
        for(int i=0; i<n-1; i++){
            for(int j=i+1; j<n; j++){
                if(m[i][pos] != m[j][pos]){
                    tab[i] = croix; 
                }
            }
        }
    }

    for(int i=0; i<n-1; i++){
        if(tab[i] == 1)
            n_est_pas_duplique++;
    }
    if(n_est_pas_duplique == 9){
        tab[n-1] = croix;
    }
     for(int i=0; i<n; i++){
        printf("\n%d ",tab[i]);
    }
    for(int i=0; i<n; i++){
        if(tab[i] == rond){
            return 0;
        }
    }
    return 1;
}

int est_carre_latin(int m[n][n]){
    int line_is_ok = 0;
    int row_is_ok = 0;
    int cont=0;

    for(int i=0; i<n; i++){
        if(teste_vecteur(m,i,1) == 1){
            cont++;
        }
    }
    if(cont == n){
        line_is_ok = 1;
    }
    cont=0;
    for(int i=0; i<n; i++){
        if(teste_vecteur(m,i,0) == 1){
            cont++;
        }
    }
    if(cont == n){
        row_is_ok = 1;
    }

    if((line_is_ok == 1) && (row_is_ok == 1)){
        return 1;
    }
    return 0;
}

void initialise_ronds_matrice(t_symbole matrice[n][n]){
    for(int i=0; i<n; i++){
        for (int j = 0; j < n; j++){
            matrice[i][j] = rond;   
        }
    }
}

int compte_ronds_matrice(t_symbole matrice[n][n]){
    int NbreRonds=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(matrice[i][j] == rond){
                NbreRonds++;
            }
        }
    }
    return NbreRonds;
}

int contient_rond_matrice(t_symbole matrice[n][n]){
    if(compte_ronds_matrice(matrice) > 0){
        return 1;
    }
    return 0;
}
