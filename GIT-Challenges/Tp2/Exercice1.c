#include<stdio.h>
#include<stdlib.h>

int	main(int argc, char **argv){
    unsigned char caractere;

    printf("Entrez un caract%cre:\t",138);
    caractere = getchar();

    printf("Le code ASCII de '%c' est %d \n"
            "Le caract%cre suivant dans la table ASCII est '%c' \n",caractere,caractere,138,caractere+1);

    for(int i = 100; i<150;i++){
        printf("%c %d \n",i,i);
    }
    system("pause");
    return EXIT_SUCCESS;

    /* 
        Après avoir essayé avec le caractère 'ü',le programme affiche -127
        Au départ, en utilisant char tt simplement, la plage était défini de -128 à 127
        Pour corriger cet éventuel problème il faut prendre le soin de déclarer le caractère  comme
        unsigned char
     */
}
