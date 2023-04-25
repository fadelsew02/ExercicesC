#include<stdio.h>
#include <stdlib.h>

#include "fichier.h"

int main(int argc, char **argv){

    int m[n][n];
    int a=0;

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            m[i][j] =a;
            a++;
        }
    }

    affiche_cl(m);

    int ret = est_carre_latin(m);
    printf("\n Le retour est : %d \n", ret);
    system("pause");
    return 0;
}
