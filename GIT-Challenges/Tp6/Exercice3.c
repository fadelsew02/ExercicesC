#include<stdio.h>
#include <stdlib.h>
#include<string.h>

int	main(int argc, char **argv){

    char chaine1[256];
    char chaine2[256];
    char chaine3[256];

    printf("Entrez une premiere chaine de caractere:\t");
    gets(chaine1);
    
    printf("Entrez une seconde chaine de caractere:\t");
    gets(chaine2);

    printf("La chaine3 est leur concatenation: %s \n\n",strcat(chaine1, chaine2));

    system("pause");
    return 0;
    /* 
        La chaine a pour longueur 9, puisque la longueur de chaine1 et chaine2 est de 4
        en enlevant le caractere de fin de chaine. Donc leur concatenation donne une chaine de 8, plus le
        caractere de fin de chaine, on obtient 9
     */
}
