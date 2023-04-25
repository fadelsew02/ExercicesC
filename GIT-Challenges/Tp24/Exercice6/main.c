#include <stdio.h>
#include <stdlib.h>

#include "fichier.h"

int main(int argc, char **argv){
     
    s_vecteur v_OA;
    s_vecteur res;
    double mat[n][n];
    int x_O = 0, y_O = 0, x_OA = 0, y_OA=0;
    // Uint32 coul;


    printf("Les coordonnes du centre O: \tx = ");
    scanf("%d",&x_O);
    printf("\t\t\t y = ");
    scanf("%d",&y_O);

    printf("Les coordonnes du vecteur OA: \t:x = ");
    scanf("%d",&(v_OA.x));
    printf("\t\t\t y = ");
    scanf("%d",&(v_OA.y));

    dessine_carre(x_O, y_O, v_OA);

    
    system("pause");
    return EXIT_SUCCESS;
}