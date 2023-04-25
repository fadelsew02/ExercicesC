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
    for(int i=longueur1-1;i>=0;i--){
        scanf(" %d",&nombre1[i]);
    }                                                                                                         
    int verifie2=est_binaire(nombre1,longueur1);
    if(verifie2==0){
        goto  Reprise;
    }

    Reprise1:
    printf("Entrez  les constituants de votre binaire\n");
    for(int i=longueur2-1;i<=0;i++){
        scanf(" %d",&nombre2[i]);
    }                                                                                                         
    int verifie3=est_binaire(nombre2,longueur2);
    
    if(verifie3==0){
        goto  Reprise1;
    }

    int  nombre3[N];
    int longueur3=0;
    calcule_addition(nombre1,longueur1,nombre2,longueur2,nombre3,&longueur3); 
    printf("Le resultat de votre addition est:");
    for(int i=longueur3-1;i>=0;i--){
        printf("%d",nombre3[i]);
    }
    system("pause");
    return 0;
}                                        


