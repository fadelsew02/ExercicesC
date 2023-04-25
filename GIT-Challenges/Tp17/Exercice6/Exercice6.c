#include <stdio.h>
#include <stdlib.h>

#include "permutation.h"

int	main(int argc, char **argv){
    int perm[N];

Reprise:
    saisis_permutation(perm);
    if(verifie_permutation(perm) == 0){
        goto Reprise;
    }

    affiche_permutation(perm);
    printf("\n");
    if(est_identite(perm) == 1){
        printf("La permutation est une identite");
    }else{
        printf("La permutation n'est pas une identite");
    }
    printf("\n");
    system("pause");
    return 0;
}
