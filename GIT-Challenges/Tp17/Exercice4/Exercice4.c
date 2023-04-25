#include <stdio.h>
#include <stdlib.h>

#include "permutation.h"

int	main(int argc, char **argv){
    int perm1[N];
    int perm2[N];
    int resultat[N];

    printf("Entree des valeurs pour la premiere permutation\n");
Reprise:
    saisis_permutation(perm1);
    if(verifie_permutation(perm1) == 0){
        goto Reprise;
    }

    printf("Entree des valeurs pour la seconde permutation\n");
Reprise1:
    saisis_permutation(perm2);
    if(verifie_permutation(perm2) == 0){
        goto Reprise1;
    }
    printf("Affichage de la permutation 1");
    affiche_permutation(perm1);
    printf("\n Affichage de la permutation 2");
    affiche_permutation(perm2);
    printf("\n");

    compose_permutation(perm1,perm2,resultat);
    printf("\n");
    system("pause");
    return 0;
}
