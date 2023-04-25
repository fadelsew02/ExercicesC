#include <stdio.h>
#include <stdlib.h>

#include "binaire.h"

void affiche_binaire(int nombre[N], int longueur){
    printf("(");
    for(int i=N; i>0; i++){
        printf("%d",nombre[i]);
        if(i!= 0 || i%4==0){
            printf(" ");
        }
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

int calcule_puissance1(float x, int n, float *res){
    int iteration=n;
    

    for (int i = 0; i < n; i++){
        *res = *(res)*x; 
    }
    return iteration;
}          