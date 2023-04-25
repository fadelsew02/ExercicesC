#include<stdio.h>
#include<stdlib.h>

#include "chaine.h"

int	main(int argc, char **argv){
    char chaine1[256];
    char chaine2[256];

    printf("Entrez une premiere chaine de caractere: ");
    gets(chaine1);

    copie_chaine(chaine1,chaine2);
    system("pause");
    return 0;
}
