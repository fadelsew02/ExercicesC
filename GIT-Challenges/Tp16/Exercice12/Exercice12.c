#include<stdio.h>
#include<stdlib.h>

#include "chaine.h"

int	main(int argc, char **argv){
    char chaine1[256];
    char chaine2[256];

    printf("Entrez une premiere chaine de caractere: ");
    gets(chaine1);
    printf("Entrez une seconde chaine de caractere: ");
    gets(chaine2);

    if((est_prefixe(chaine1,chaine2)) == 1){
        printf("%s est un prefixe de  %s \n",chaine1,chaine2);
    }else{
        printf("%s n'est pas un prefixe de %s \n",chaine1,chaine2);
    }

    system("pause");
    return 0;
}
