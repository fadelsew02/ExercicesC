#include<stdio.h>
#include<stdlib.h>

#include "Exercice2.h"

void initialise_permutation(t_entier_girouette tab[], int n){
    for (int i = 0; i < n; i++){
        tab[i].valeur = i;
        tab[i].girouette = gauche;
    }
}

void affiche_permutation(t_entier_girouette tab[], int *n){
    for (int i = 0; i < (*n); i++){
        if(tab[i].girouette == gauche){
            printf("\t<-");
        }else{
            printf("\t->");
        }
    }
    printf("\n");
    for (int i = 0; i < (*n); i++){
        printf("\t%2d ",tab[i].valeur);
    }
    printf("\n");
}

int is_ok(int perm, t_entier_girouette tab[], int n, int b){
    if ((perm < n && perm >= 0) && (b > tab[perm].valeur)){
        return 1;
    }else{
        return 0;
    } 
}

int identifie_pgem(t_entier_girouette tab[], int n, int *max, int *pgem){
    int pos=0, perm=0;
    int cont=0;
    (*max) = n-1;
    while (cont == 0){
        for (int i = 0; i < n; i++){
            if((*max) == tab[i].valeur){
                pos = i;
            }
        }
        perm = tab[(*max)].girouette + pos;
        int a=(*max);
        if (is_ok(perm,tab,n,a) == 1){
            cont = 1;
        }else{
            (*max)--;
        }
    }
    (*pgem) = tab[pos].valeur;
    return pos;
}

void deplace_entier(t_entier_girouette *tab, int *res, int *inter){
    t_entier_girouette perm;

    *inter = tab[(*res)].girouette + (*res);
    perm = tab[*(res)];
    tab[*res] = tab[(*inter)];
    tab[(*inter)] = perm;
}

void inverse_girouette(t_entier_girouette tab[], int *res, int *inter, int n, int *pgem){
    int i=n;
    for (int j = 0; j < n; j++){
        if (tab[j].valeur > (*pgem)){
            tab[j].girouette *= -1;
        }
    }
    affiche_permutation(tab,&i);
}
