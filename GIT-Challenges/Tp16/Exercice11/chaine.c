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

int compte_espaces(char *chaine){
    int space=0;
    for(int i=0; i<strlen(chaine); i++){
        if(chaine[i] == ' '){
            space++;
        }
    }
    return space;
}

int is_sep(char c){
    if(c == ' ' || c == '\0' || c =='\t'){
        return 0;
    }
    return 1;
}

int compte_mots(char *chaine){
    int count=0;
    int word=0;

    if(chaine == NULL){
        return 0;
    }
    while(chaine[count] != '\0'){
        if(is_sep(chaine[count]) && is_sep(chaine[count+1]) == 0){
            ++word;
        }
        ++count;
    }
    return word;
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
