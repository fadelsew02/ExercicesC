#include <stdio.h>
#include <stdlib.h>

#include "promotion.h"

int	main(int argc, char **argv){
    t_promo promo;
    char nom[10];
    printf("Entrez le nom de l'etudiant recherche: ");
    scanf("%s",&nom);

    promo = initialise_promotion();
    cherche_homonymes(promo,nom);   
    // affiche_promotion(promo); 
    
    system("pause");
    return 0;
}
