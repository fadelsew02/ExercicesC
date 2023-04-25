#include <stdio.h>
#include <stdlib.h>

#include "binaire.h"

void affiche_binaire(int nombre[N], int longueur){
    printf("(");
    for(int i=N; i>0; i++){
        printf("%d",nombre[i]);
    }
    printf(")_2");
}

int est_binaire(int nombre[N], int  longueur){
     int  anormal=1;                   
    for(int i=0; i<N;i++){                       
        if(nombre[i] >= 2) { 
              return 0;
        }
    }                                   
    return  anormal;
} 
     



void divise_binaire(int x, int *q, int *r){
    *q = x/2;
    *r = x%2;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        
}

int compare_binaire(int nombre1[N], int longueur1, int nombre2[N], int longueur2){
    int res=0;
    if(longueur1 <longueur2){
        return longueur1-longueur2;
    }else if(longueur1>longueur2){
        return  longueur1-longueur2;
    }else{
        for(int i=0;i<longueur1;i++){
            res=nombre1[i]-nombre2[i];
            if(res<0){
                return -1;
            }else if(res>0){
                return 1;
            }
        }
    }
    return 0;
}              