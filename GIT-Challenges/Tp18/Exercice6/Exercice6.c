#include <stdio.h>
#include <stdlib.h>

#include "binaire.h"

int main(int argc, char **argv){
    int nombre[N]= {0};

    int n=0;
    int res=0;
    int  longueur; 
    Reprise:
    
    printf("Entrez la longueur:");
    scanf("%d",&longueur);

    printf("Entrez  les constituants de votre binaire\n");
    for(int i=longueur-1;i>=0;i--){
        scanf(" %d",&nombre[i]);
    }                                                                                                         
   
    int verifie=est_binaire(nombre,longueur);
    if(verifie==0){
        goto  Reprise;
    }
    res = recompose_binaire(nombre,&longueur);                                                                                     
    printf("le resultat est %d ",res);
    printf("\n");
    system("pause");
    return 0;
}                                        


