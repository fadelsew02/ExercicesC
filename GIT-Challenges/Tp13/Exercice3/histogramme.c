#include<stdio.h>
#include "histogramme.h"

void affiche_tableau(int tab[], int taille){
    printf("Tableau genere: \n");
    for(int i = 0; i < taille; i++){
        printf("tab[%d] = %d \n",i,tab[i]);
    }
}

/* void decompte_valeurs(int tab[], int taille, int decompte[]){
    for(int a=0; a<VAL_MAX+1;a++){
        for(int i=0; i < taille; i++){
            if(tab[i] == a){
                decompte[a]++;
            }
        }
    }
    printf("\n Tableau de decompte: \n");
    printf("{");
    for(int a=0; a<VAL_MAX+1; a++){
        printf(" %d ",decompte[a]);
    }
    printf("} \n");
} */

void decompte_valeurs(int *tab, int taille, int decompte[]){
    static int z=0;
    for(int a=0; a<VAL_MAX+1;a++){
        for(int i=0; i < taille; i++){
            if(tab[i] == a){
                decompte[a]++;
            }
        }
    }

    int decompte_r[VAL_MAX+1];
    int decompte_v[VAL_MAX+1];
    int decompte_b[VAL_MAX+1];
    if(z == 0){
        for(int i=0; i<VAL_MAX+1; i++){
            decompte_r[i] = decompte[i];
        }
    }else if(z == 1){
        for(int i=0; i<VAL_MAX+1; i++){
            decompte_v[i] = decompte[i];
        }
    }else if(z ==2){
        for(int i=0; i<VAL_MAX+1; i++){
            decompte_b[i] = decompte[i];
        }
    }
 /*    printf("\n Tableau de decompte: \n");
    printf("{");
    for(int a=0; a<VAL_MAX+1; a++){
        printf(" %d ",decompte[a]);
    }
    printf("} \n"); */
     z++;
}


/* void histogramme_horizontal(int decompte[], int taille_d){
    for(int i = 0; i < taille_d; i++){
        for(int j = 0; j < decompte[i]; j++){
            printf("*");
        }
        printf("\n");
    }
} */

/* void histogramme_horizontal(int classes[], int taille_d){
    for(int i = 0; i < taille_d; i++){
        for(int j = 0; j < classes[i]; j++){
            printf("*");
        }
        printf("\n");
    }
} */

void histogramme_horizontal(int etoiles[], int taille_d){
    for(int i = 0; i < taille_d; i++){
        for(int j = 0; j < etoiles[i]; j++){
            printf("*");
        }
        printf("\n");
    }
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
                    printf("*");
                }else{
                    printf(" ");
                }
            }
            printf("\n");
        }
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
    printf("Le tableau de classes est: \n");
    for(int y=0; y<nbr_classes; y++){
        printf(" %d ",classes[y]);
    }
    printf("\n");
    int echelle = 0;
    printf("Choisissez votre  echelle: ");
    scanf("%d",&echelle);
    int etoiles[nbr_classes];
    regroupe_etoiles(classes,nbr_classes, etoiles, echelle);
    // histogramme_horizontal(classes, (VAL_MAX+1)/8);
    // printf("\n\n");
}

void regroupe_etoiles(int classes[], int nbr_classes, int etoiles[], int echelle){
    printf("Donc la representation de votre histogramme se fera de telle sorte que une etoile representera %d etoiles",echelle);
    for(int i=0; i<nbr_classes; i++){
        etoiles[i] = classes[i]/echelle;
    }

    printf("Le tableau d'etoiles est: \n");
    for(int y=0; y<nbr_classes; y++){
        printf(" %d ",etoiles[y]);
    }
    printf("\n");
    histogramme_horizontal(etoiles, (VAL_MAX+1)/8);
    printf("\n\n");
}



