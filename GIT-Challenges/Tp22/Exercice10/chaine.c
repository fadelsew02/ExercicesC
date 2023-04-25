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
