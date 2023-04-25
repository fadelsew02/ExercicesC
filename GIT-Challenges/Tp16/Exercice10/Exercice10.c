#include<stdio.h>
#include<stdlib.h>

#include "chaine.h"

int	main(int argc, char **argv){
    char chaine[256];

    printf("Entrez une chaine de caractere: ");
    gets(chaine);
    
    printf("La chaine entre contient %d espaces \n",compte_espaces(chaine));
    
    system("pause");
    return 0;
}
