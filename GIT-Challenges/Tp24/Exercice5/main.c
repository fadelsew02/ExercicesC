#include <stdio.h>
#include <stdlib.h>

#include "fichier.h"

int main(){
    s_vecteur vect;
    s_vecteur res;
    double mat[n][n];

    initialise_rotation(mat);
    vect.x = 0.0;
    vect.y = -1.0;

    applique_rotation(mat,vect,&res);

    affiche_vecteur(res);
    system("pause");
    return EXIT_SUCCESS;
}