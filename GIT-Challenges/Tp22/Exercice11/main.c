#include <stdio.h>
#include <stdlib.h>

#include "promotion.h"

int	main(int argc, char **argv){
    t_promo promo;
    char prefixe[10];
    t_promo res;

    printf("Entrez le nom de l'etudiant recherche: ");
    scanf("%s",&prefixe);

    promo = initialise_promotion();
    cherche_prefixe(promo,&res,prefixe);
    
    system("pause");
    return 0;
}
