#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "chaine.h"

int mesure_chaine(char *chaine){
    return strlen(chaine);
}

int compare_chaine(char *chaine1, char *chaine2){
    if(strcmp(chaine1,chaine2) < 0){
        return -1;
    }else if(strcmp(chaine1,chaine2) == 0){
        return 0;
    }else{
        return 1;
    }
}

void copie_chaine(char *chaine1, char *chaine2){
    strcpy(chaine2,chaine1);
    printf("%s \n",chaine2);
}

void inverse_chaine(char *chaine){
    int j=0, i=0;;
    char rev[256];
    int length = strlen(chaine);
    
    rev[length] = '\0';
    for(i=length-1; i>=0; i++){
        rev[j++] = chaine[i];
    }
    rev[i] = '\0';

    printf("Chaine apres inversion: %s \n",rev);
}

void supprime_majuscules(char *chaine){
    printf("La chaine sans les majuscules est: ");
    for(int i=0; i<strlen(chaine); i++){
        if(chaine[i] > 96){
            printf("%c",chaine[i]);
        }
    }
    printf("\n");
}

void remplace_majuscules(char *chaine){
    for(int i=0; i<strlen(chaine); i++){
        if(chaine[i] > 96){
            printf("%c",chaine[i]);
        }else{
            printf("%c",(chaine[i]+32));
        }
    }
    printf("\n");
}

int compte_espaces(char *chaine){
    int space=0;
    for(int i=0; i<strlen(chaine); i++){
        if(chaine[i] == ' '){
            space++;
        }
    }
    return space;
}


int compte_mots(char *chaine){
    int space=0;
    for(int i=0; i<strlen(chaine); i++){
        if(chaine[i] == ' '){
            space++;
        }
    }
    return space;
}

int est_prefixe(char *chaine1, char *chaine2){
    int length=strlen(chaine1);
    int prefixe=0;

    for(int i=0; i<length; i++){
        if(chaine1[i] == chaine2[i]){
            prefixe++;
        }
    }
    if(prefixe == length){
        return 1;
    }else{
        return 0;
    }
}
