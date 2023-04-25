#include <stdio.h>
#include <stdlib.h>

#include "permutation.h"

void saisis_permutation(int perm[N]){
    for (int i = 0; i < N; i++){
        printf("Saisissez l'image de %d : ",i);
        scanf("%d",&perm[i]);
        printf("\n");
    }
    
}

void affiche_permutation(int perm[N]){
    printf("La permutation saisie est: \n");
    for(int i=0; i<N; i++){
        printf(" %d ",i);
    }
    printf("\n");
    for(int i=0; i<N; i++){
        printf(" %d ",perm[i]);
    }
}

int verifie_permutation(int perm[N]){
    int a=0;
    int present=0;
    for (int i = 1; i < N; i++){
        a = perm[i-1];
        if(a == perm[i]){
            present = 1;
            break;
        }else if(perm[i] > N-1){
            present = 1;
            break;
        }
    }

    if(present == 1){
        printf("Les valeurs saisies ne definissent pas une permutation.\n");
        return 0;
    }else{
        return 1;
    }
}

int est_identite(int perm[N]){
    int a=0;
    for(int i=0; i<N; i++){
        if(perm[i] == i){
            a++;
        }
    }
    if(a == N){
        return 1;
    }else{
        return 0;
    }
}

void affiche_cycle(int perm[N]){
    int tab[N] ={- 1};
    int deja=0;
    printf("On a donc: \n\t   (");
    for (int i = 0; i < N; i++){
        if(perm[i] != i){
            for(int k=0;k<i;k++){
                if(perm[k]==i){
                    deja=1;
                }
            }
            if(deja==0){
                printf(" %d %d",i,perm[i]);     
            }                                                                                                                              
        }                                                                
    }                                             
    printf(")");               
}