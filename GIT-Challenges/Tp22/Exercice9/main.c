#include <stdio.h>
#include <stdlib.h>

#include "promotion.h"

int	main(int argc, char **argv){
    t_promo promo;

    promo = initialise_promotion();   
    affiche_promotion(promo); 
    
    system("pause");
    return 0;
}
