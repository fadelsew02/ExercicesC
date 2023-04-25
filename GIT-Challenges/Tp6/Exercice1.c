#include<stdio.h>
#include<stdlib.h>
#include <string.h>

int main(){
    char chaine[256];
    int length = 0;

    printf("Entrez une chaine de caractere:\t");
    gets(chaine);
    length = sizeof(chaine);
    printf("Il y a %d caracteres dans la chaine '%s' \n",length,chaine);
    system("pause");
    return EXIT_SUCCESS;
}