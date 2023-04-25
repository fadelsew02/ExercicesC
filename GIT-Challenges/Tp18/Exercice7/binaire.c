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

void calcule_addition(int nombre1[N], int longueur1, int nombre2[N],int longueur2,int nombre3[N], int *longueur3){
    int lg=0;
    int result[N];
    int res=0;
    int att=0;
    int retenue=0;
    int lg2=0;
    if(longueur1<longueur2){
        lg=longueur1; 
        lg2=longueur2;
        att=1;
    }else if(longueur1>longueur2){
        lg=longueur2;
        lg2=longueur1; 
        att=1;   
    }else{
        lg=longueur1;
    }
    (*longueur3)=0;
    for(int i=0;i<lg;i++){
        res=nombre1[i]+nombre2[i]+retenue;
        if(res==0 || res==1){
            result[i]=res;
        }else if (res==2){
            res=0;
            retenue=1;
            result[i]=res;
        }
        (*longueur3)++;
    }
    if(att==1){
        for(int i=lg;i<lg2;i++){
            if(longueur1<longueur2){
                res=nombre2[i]+retenue;
            }else{
                res=nombre1[i]+retenue;
            }
            if(res==0 || res==1){
            result[i]=res;
            }else if (res==2){
                res=0;
                retenue=1;
                result[i]=res;
            }
            (*longueur3)++;
        }
    }
}   