#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	main(int argc, char **argv){

    char chaine1[256];
    
    printf("Entrez une chaine de caractere:\t");
    gets(chaine1);

    printf("L'inversion de la chaine entree est:");

    for (int i = strlen(chaine1); i >=0; i--){
        printf("%c",chaine1[i]);
    }

    printf("\n\n");
    system("pause");
    return 0;
}
