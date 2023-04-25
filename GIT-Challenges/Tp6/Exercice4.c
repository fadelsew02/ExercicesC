#include <stdio.h>
#include<stdlib.h>
#include <string.h>

int	main(int argc, char **argv){
    char chaine1[256];
    char chaine2[256];

    printf("Entrez la chaine 1:\t");
    gets(chaine1);

    printf("Entrez la chaine 2:\t");
    gets(chaine2);

    int test = strcmp(chaine1, chaine2);
    if(test < 0){
        printf(" Resultat: %s < %s \n\n",chaine1,chaine2);
    }else if (test > 0){
        printf(" Resultat: %s > %s \n\n",chaine1,chaine2);
    }else{
        printf("Resultat: %s = %s \n\n",chaine1,chaine2);
    }
    system("pause");
    return 0;
}
