#include<stdio.h>
#include<stdlib.h>

#include "chaine.h"

int	main(int argc, char **argv){
    char chaine[256];
    int length=0;

    printf("Entrez une chaine de caractere: ");
    gets(chaine);

    inverse_chaine(chaine);
    system("pause");
    return 0;
}
