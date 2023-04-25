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
    *pgem = 0;
    while (cont == 0){
        for (int i = 0; i < n; i++){
            if((*max) == tab[i].valeur){
                pos = i;
            }
        }
        perm = tab[pos].girouette + pos;
        int a=(*max);
        // printf("\n perm = %d   \n",perm);
        // printf("   max = %d   \n",*max);
        // printf("   girouette = %d   \n",tab[pos].girouette);
        
        if (is_ok(perm,tab,n,a) == 1){
            cont = 1;
        }else{
            (*max)--;
        }
        if(*max == 0){
            break;
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
            tab[j].girouette = -1*tab[j].girouette;
        }
    }
    affiche_permutation(tab,&i);
}


void johnson(int n){

    int res=0, max=0;
    int inter=0, nbr=1;
    int pgem=0, count=1;

    max = n-1;
    t_entier_girouette tab[n];

    initialise_permutation(tab,n);
    affiche_permutation(tab,&n);
    for(int j=1; j<=n; j++){
        nbr = j*nbr;
    }
    // printf("%d\n",nbr);

    while(count < nbr){
        max=n-1;
        res = identifie_pgem(tab,n,&max,&pgem);
        deplace_entier(tab,&res,&inter);
        inverse_girouette(tab,&res,&inter,n,&pgem);
        count++;
    }
}
