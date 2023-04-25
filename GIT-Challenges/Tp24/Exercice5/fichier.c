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

void affiche_vecteur(s_vecteur vect){
    printf(" ( ");
    printf("%.6f", vect.x);
    printf(" ) \n");
     printf(" ( ");
    printf("%.6f", vect.y);
    printf(" ) \n");
}

void applique_rotation(double m[n][n], s_vecteur v, s_vecteur* resultat){
    
    (*resultat).x = (v.x)*m[0][0] + (v.y)*m[0][1];
    (*resultat).y = (v.x)*m[1][0] + (v.y)*m[1][1];
}