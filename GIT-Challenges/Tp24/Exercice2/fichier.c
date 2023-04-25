#include<stdio.h>
#include<stdlib.h>
#include<math.h>

#include "fichier.h"

void affiche_matrice(double mat[n][n]){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            printf("  %.6f",mat[i][j]);
        }
        printf("\n");
    }
}

void initialise_rotation(double mat[n][n]){
    double theta = PI / 3.0;

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i == 0 && j == 0){
                mat[i][j] = cos(theta);
            }else if(i == 0 && j == 1){
                mat[i][j] = -1 * sin(theta);
            }else if(i == 1 && j == 0){
                mat[i][j] = sin(theta);
            }else if(i == 1 && j == 1){
                mat[i][j] = cos(theta);
            }
        }
    }

    affiche_matrice(mat);
}