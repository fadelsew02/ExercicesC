#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

int main(int argc, char const *argv[]){

    char caractere=0;

    printf("Entrez le caract%cre a traiter:\t",138);
    scanf("%c",&caractere);
    if(tolower(caractere)){
        printf("Caractere apres le traitement:\t%c \n",toupper(caractere));
    }else{
        printf("Caractere apres le traitement:\t%c \n",caractere);
    }
    
    system("pause");
    return EXIT_SUCCESS;
}
