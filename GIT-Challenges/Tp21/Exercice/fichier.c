#include<stdio.h>
#include <stdlib.h>

#include "fichier.h"

void affiche_cl(int m, int n){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            printf(" %d ",m[i][j]);
        }
        printf("\n");
    }
    
}