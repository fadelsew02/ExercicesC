#include <stdio.h>
#include <stdlib.h>

#include "binaire.h"

int est_binaire(int nombre[N], int longueur){
    int  anormal=1;                   
    for(int i=0; i<N;i++) {                       
        if(nombre[i] >= 2) { 
            return 0;
        }
    }
    return anormal;
} 