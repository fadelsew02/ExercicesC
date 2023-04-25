#include<stdio.h>
#include<stdlib.h>

#include "chaine.h"

int	main(int argc, char **argv){
    char chaine1[256];
    char chaine2[256];
    int result=0;

    printf("Entrez une premiere chaine de caractere: ");
    gets(chaine1);
    printf("Entrez une seconde chaine de caractere: ");
    gets(chaine2);

    result = compare_chaine(chaine1,chaine2);
    if(result == -1){
        printf("%s est situe avant %s \n",chaine1,chaine2);
    }else if(result == 0){
        printf("%s == %s \n",chaine1,chaine2);
    }else{
        printf("%s est situe apres %s \n",chaine1,chaine2);
    }
    system("pause");
    return 0;
}
