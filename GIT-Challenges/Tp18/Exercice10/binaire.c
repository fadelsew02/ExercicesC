#include <stdio.h>
#include <stdlib.h>
#include<math.h>

#include "binaire.h"

void affiche_binaire(int nombre[N], int longueur){
    printf("(");
    for(int i=N; i>0; i++){
        printf("%d",nombre[i]);        
    }
    printf(")_2");
}

int est_binaire(int nombre[N], int longueur){
    int  anormal=1;                   
    for(int i=0; i<N;i++){                       
        if(nombre[i] >= 2){
            return 0;
        }
    }                                   
    return  anormal;
} 

void divise_binaire(int x, int *q, int *r){
    *q = x/2;
    *r = x%2;            
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


int calcule_puissance2(float x, int n, float *res){
    int longueur=0;
    int nombre[N]={0};
    *res=1;
    decompose_binaire(n,nombre,&longueur);
    for (int i = longueur-1; i >= 0; i--){
       *res=(*res)* pow((pow(x,pow(2,longueur-1-i))),nombre[longueur-i-1]);
    }
    printf("\n");
    return longueur;
}