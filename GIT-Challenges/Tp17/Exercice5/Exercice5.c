#include <stdio.h>
#include <stdlib.h>

#include "permutation.h"

int	main(int argc, char **argv){
    int perm[N];
    int resultat[N];

Reprise:
    saisis_permutation(perm);
    if(verifie_permutation(perm) == 0){
        goto Reprise;
    }

    affiche_permutation(perm);
    printf("\n");
    inverse_permutation(perm, resultat);
    printf("\n");
    system("pause");
    return 0;
}
