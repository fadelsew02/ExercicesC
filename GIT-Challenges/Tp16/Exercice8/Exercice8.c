#include<stdio.h>
#include<stdlib.h>

#include "chaine.h"

int	main(int argc, char **argv){
    char chaine[256];

    printf("Entrez une chaine de caractere: ");
    gets(chaine);
    supprime_majuscules(chaine);
    
    system("pause");
    return 0;
}
