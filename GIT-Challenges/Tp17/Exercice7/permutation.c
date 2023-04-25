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

void inverse_permutation(int perm[N], int resultat[N]){
    int a=0;
    int res[N];
    
    for(int i=0; i<N; i++){
        a=perm[i];
        resultat[i] = perm[a]; 
    }

    printf("\n La permutation reciproque est : \n ");
    for(int i=0; i<N; i++){
        printf(" %d ",i);
    }
    printf("\n ");
    for (int i = 0; i < N; i++){
        printf(" %d ",resultat[i]);
    }
    compose_permutation(perm,resultat,res);
}

void compose_permutation(int perm1[N], int perm2[N], int resultat[N]){
    int a=0;
    for(int i=0; i<N; i++){
        a=perm1[i];
        resultat[i] = perm2[a]; 
    }

    printf("\n La composee de l'originale par la reciproque est : \n");
    for(int i=0; i<N; i++){
        printf(" %d ",i);
    }
    printf("\n");
    for (int i = 0; i < N; i++){
        printf(" %d ",resultat[i]);
    }

    if(est_identite(resultat) == 1){
        printf("\n La composee est bel et bien une identite\n");
    }else{
        printf("\n Non, la composee n'est pas une identite\n");
    }

    printf("\n");
}