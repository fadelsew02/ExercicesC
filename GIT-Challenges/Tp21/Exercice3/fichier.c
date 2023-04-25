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