#include <stdio.h>
#include <stdlib.h>

#include "Exercice2.h"

int	main(int argc, char **argv){ 
    
    int n=0;
    int res=0, max=0;

    printf("Entrez la taille de votre permutation: ");
    scanf("%d",&n);
    max = n;
    t_entier_girouette tab[n];
    initialise_permutation(tab,n);
    affiche_permutation(tab,n);

    res = identifie_pgem(tab,n,&max);
    // printf(" \n\t La position du plus grand entier mobile (PGEM) est: %d \n\n",res);
    deplace_entier(tab,&res);
    affiche_permutation(tab,n);

    system("pause");
    return 0;
}
