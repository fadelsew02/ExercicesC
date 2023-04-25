#include<stdio.h>
#include "histogramme.h"

void decompte_valeurs(int *tab, int taille, int decompte[]){
    for(int a=0; a<VAL_MAX+1;a++){
        for(long int i=0; i < taille; i++){
            if(tab[i] == a){
                decompte[a]++;
            }
        }
    }

    /*   printf("\n Tableau de decompte: \n");
    printf("{");
    for(int a=0; a<VAL_MAX+1; a++){
        printf(" %d ",decompte[a]);
    } */
    // printf("} \n"); 
    int classes[32] = {0};
    regroupe_classes(decompte, 32, classes);
}

void regroupe_classes(int decompte[], int nbr_classes, int classes[]){
    
    int k=0, j=0;
    for (int i = 0; i < nbr_classes; i++){
        classes[i]=0;
    }
    for(int i=0; i < nbr_classes; i++){
        for(j=k; j<k+8; j++){
            classes[i] = classes[i]+decompte[j];
        }
        k=k+8;
    }
    /* printf("Le tableau de classes est: \n");
    for(int y=0; y<nbr_classes; y++){
        printf(" %d ",classes[y]);
    }
    printf("\n"); */

    int echelle = 100;
    int etoiles[nbr_classes];
    regroupe_etoiles(classes,nbr_classes, etoiles, echelle);
}

void regroupe_etoiles(int classes[], int nbr_classes, int etoiles[], int echelle){
    printf("\n");
    for(int i=0; i<nbr_classes; i++){
        etoiles[i] = classes[i]/echelle;
    }

    printf("\nLe tableau d'etoiles est: \n");
    for(int y=0; y<nbr_classes; y++){
        printf(" %d ",etoiles[y]);
    }
    printf("\n");
    histogramme_vertical(etoiles, (VAL_MAX+1)/8);
    printf("\n\n");
}

void histogramme_vertical(int decompte[], int taille_d){
    int max = 0;
    for(int i=0; i<taille_d;++i){
        if(decompte[i] > max){
            max = decompte[i];
        }
    }
        for(int j=max; j>0; --j){
            for(int i=0; i<taille_d; ++i){
                if(decompte[i] >= j){
                    printf(" * ");
                }else{
                    printf("   ");
                }
            }
            printf("\n");
        }
}

