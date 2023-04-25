#include <stdio.h>
#include<stdlib.h>

int	main(int argc, char **argv){
    short var1 = 0;
    short var2 = 0;

    printf("Entrez deux valeurs enti%cres:",138);
    scanf("%hd",&var1);
    scanf("%hd",&var2);
   
    printf("La somme: %hd \n",var1+var2);
    system("pause");
    return EXIT_SUCCESS;

    /* 
        18000 + 19000 = -28536;
        56 +(-33333) = 32259;

        La somme de deux entiers positifs donne un resultat négatif et 
        la somme de deux entiers de signes contraires donne un résultat positif tant bien meme que
        l'entier avec la plus grande distance à 0 a le signe négatif

        La somme des deux entiers positifs dépassent la valeur maximale que peut prendre un short(32727) 
     */
}
