#include <stdio.h>
#include <stdlib.h>

#include "binaire.h"

void affiche_binaire(int nombre[N], int longueur){
    printf("(");
    for(int i=longueur; i>=0; i--){
        printf("%d",nombre[i]);
        if(i != 0 && i%4 == 0){
            printf(" ");
        }
    }
    printf(")_2");
}

void divise_binaire(int x, int *q, int *r){
    *q = x / 2;
    *r = x % 2;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        
}

void decompose_binaire(int n, int nombre[N], int *longueur){                           
    int q=n;
    int r=0;                                                                
    *longueur= 0;
    while(q != 0){
        divise_binaire(q,&q,&(nombre[*longueur]));
        (*longueur)++;                                                                          
    }                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            
}                                                         
