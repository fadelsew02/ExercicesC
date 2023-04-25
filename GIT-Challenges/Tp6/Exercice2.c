#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int	main(int argc, char **argv){
    char chaine1[256];
    char chaine2[256];

    printf("Entrez une chaine de caractere:\t");
    gets(chaine1);

    strcpy(chaine2, chaine1);
    printf("La chaine recopiee est: ");
    puts(chaine2);
    printf("\n\n");
    system("pause");
    return EXIT_SUCCESS;
}
