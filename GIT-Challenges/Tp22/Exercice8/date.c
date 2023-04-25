#include <stdio.h>
#include <stdlib.h>

#include "date.h"

void affiche_mois(t_mois m){
    t_mois month=m;
    switch (month){
    case jan:
        printf("Janvier");
        break;
    case fev:
        printf("Fevrier");
        break;
    case mars:
        printf("Mars");
        break;
    case avr:
        printf("Avril");
        break;
    case mai:
        printf("Mai");
        break;
    case juin:
        printf("Juin");
        break;
    case juil:
        printf("Juillet");
        break;
    case aout:
        printf("Aout");
        break;
    case sept:
        printf("Septembre");
        break;
    case oct:
        printf("Octobre");
        break;
    case nov:
        printf("Novembre");
        break;
    case dec:
        printf("Decembre");
        break;
    default:
    printf("Ce mois n'existe pas");
        break;
    }
}

void affiche_date(int j, t_mois m, int a){
    printf(" %d ",j);
    affiche_mois(m);
    printf(" %d \n",a);
} 

t_date saisis_date(){
    t_date date;

    printf("\n\n\t\t >> Entrez le jour: ");
    scanf("%d",&date.jour);
    printf("\n\t\t >> Entrez le mois: ");
    scanf("%d",&date.mois);
    printf("\n\t\t >> Entrez l'annee: ");
    scanf("%d",&date.an);

    return date;
}

