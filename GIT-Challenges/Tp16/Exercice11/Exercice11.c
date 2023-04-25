#include<stdio.h>
#include<stdlib.h>

#include "chaine.h"

int	main(int argc, char **argv){
    char chaine[256];

    printf("Entrez une chaine de caractere: ");
    gets(chaine);
    
    printf("La chaine entre contient %d mots ",compte_mots(chaine));
    printf("\n");
    
    system("pause");
    return 0;
}
