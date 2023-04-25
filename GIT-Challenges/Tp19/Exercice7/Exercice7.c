#include <stdio.h>
#include <stdlib.h>

#include "Exercice2.h"

int	main(int argc, char **argv){ 
    
    int n=0;
    int res=0, max=0;
    int inter=0;
    int pgem=0;

    printf("Entrez la taille de votre permutation: ");
    scanf("%d",&n);
    max = n-1;
    t_entier_girouette tab[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&tab[i].valeur);
    }
    
    for(int j=0; j<n; j++){
        tab[j].girouette = gauche;
    }
    // initialise_permutation(tab,n);
    affiche_permutation(tab,&n);

    res = identifie_pgem(tab,n,&max,&pgem);
    deplace_entier(tab,&res,&inter);
    inverse_girouette(tab,&res,&inter,n,&pgem);

    system("pause");
    return 0;
}
