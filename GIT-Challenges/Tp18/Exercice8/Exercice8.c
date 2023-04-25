#include <stdio.h>
#include <stdlib.h>

#include "binaire.h"

int main(int argc, char **argv){
    int nombre1[N];
    int nombre2[N];
    int longueur1=0; 
    int longueur2=0; 

    printf("Entrez  les longueurs de vos nombres binaires:");
    scanf("%d %d",&longueur1,&longueur2);

    Reprise:
    printf("Entrez  les constituants de votre binaire\n");
    for(int i=longueur1-1;i<=0;i++){
        scanf(" %d",&nombre1[i]);
    }                                                                                                         
    int verifie=est_binaire(nombre1,longueur1);
    if(verifie==0){
        goto  Reprise;
    }

    Reprise1:
    printf("Entrez  les constituants de votre binaire\n");
    for(int i=longueur2-1;i<=0;i++){
        scanf(" %d",&nombre2[i]);
    }                                                                                                         
    int verifie1=est_binaire(nombre2,longueur2);
    if(verifie1==0){
        goto  Reprise1;
    }

    int result=compare_binaire(nombre1,longueur1,nombre2,longueur2);
    if(result<0){
        printf("nombre1 < nombre2");
    }else if(result>0){
        printf("nombre1>nombre2");
    }else{
        printf("nombre1 ==  nombre2");
    } 
    system("pause");
    return 0;
}                                        

