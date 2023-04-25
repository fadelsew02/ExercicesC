#include <stdio.h>
#include <stdlib.h>

#include "Exercice2.h"

int	main(int argc, char **argv){ 
    
    int n=0;
    int res=0;

    printf("Entrez la taille de votre permutation: ");
    scanf("%d",&n);
    
    t_entier_girouette tab[n];
    initialise_permutation(tab,n);
    affiche_permutation(tab,n);
    res = identifie_pgem(tab,n);

    printf(" \n\t La position du plus grand entier mobile (PGEM) est: %d \n\n",res);
    system("pause");
    return 0;
}
