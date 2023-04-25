#include <stdio.h>
#include<stdlib.h>
#include <string.h>

int main(int argc, char** argv){
    char chaine1[256];
    char chaine2[256];

    printf("Entrez une chaine de caractere:\t");
    gets(chaine1);

    int length = strlen(chaine1);
    int a = 0;

    for (int i = length; i >= 0; i--){
        chaine2[a] = chaine1[i];
        // printf("%c",chaine2[a]);
        a++;
    }

    printf("Chaine 2: ");
    for(int i =0; i<=length; i++){
        printf("%c",chaine2[i]);
    }
    printf("\n\n");
    system("pause");
    return EXIT_SUCCESS;
}