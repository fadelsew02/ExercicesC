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
    printf("La date entree est: \t %d ",j);
    affiche_mois(m);
    printf(" %d \n",a);
} 

t_date saisis_date(){
    t_date date;

    printf("\nEntrez le jour: ");
    scanf("%d",&date.jour);
    printf("\nEntrez le mois: ");
    scanf("%d",&date.mois);
    printf("\nEntrez l'annee: ");
    scanf("%d",&date.an);

    return date;
}

int compare_dates(t_date date1, t_date date2){
    if(date1.an > date2.an){
        return 1;
    }else if(date1.an < date2.an){
        return -1;
    }else{
        if (date1.mois < date2.mois){
            return -1;
        }else if(date1.mois > date2.mois){
            return 1;
        }else{
            if(date1.jour < date2.jour){
                return -1;
            }else if(date1.jour > date2.jour){
                return 1;
            }else{
                return 0;
            }
        }
    }
    return 0;
}

t_date copie_date(t_date date1){
    
    t_date date2;
    date2.jour = date1.jour;
    date2.mois = date1.mois;
    date2.an = date1.an;

    return date2;
}

int est_bissextile(int annee){
    if(((annee % 4 == 0) && (annee % 100 != 0)) || annee % 400 == 0){
        return 1;
    }
    return 0;
}

int indique_jours(int annee, t_mois mois){
    
    if(mois==1 || mois==3 || mois==5 || mois==7 || mois==8 || mois==10 || mois==12){
        return 31;
    }else if(mois==4 || mois==6 || mois==9 || mois==11){
        return 30;
    }else{
        if(est_bissextile(annee) == 1){
            return 29;
        }else{
            return 28;
        }
    }
}

t_date saisis_date_verif(){
    t_date date;

    printf("\nEntrez le jour (1<=entier<=29): ");
    scanf("%d",&date.jour);
    while(date.jour < 1 || date.jour > 29){
        printf("\nEntrez le jour (1<=entier<=29): ");
        scanf("%d",&date.jour);
    }

    printf("\nEntrez le mois (1<=entier<=12): ");
    scanf("%d",date.mois);
    while(date.mois < 1 || date.mois > 12){
        printf("\nEntrez le mois (1<=entier<=12): ");
        scanf("%d",&date.mois);
    }

    printf("\nEntrez l'annee (1900<=entier<=2011): ");
    scanf("%d",date.an);
    while(date.an < 1900 || date.an > 2011){
        printf("\nEntrez l'annee (1900<=entier<=2011): ");
        scanf("%d",&date.an);
    }

    return date;
}

void ajoute_jour(t_date *date){
    t_mois m = (*date).mois;
    int a = (*date).an;
    int j=(*date).jour;

    int nbrJour=indique_jours(a,m);
    (*date).jour += 1;
    if(nbrJour < (*date).jour){
        (*date).jour=1;
        (*date).mois = (*date).mois +1;
        if(12 < (*date).mois){
            (*date).mois=1;
            (*date).an += 1; 
        }
    }
}

int calcule_duree(t_date date1, t_date date2){
    t_date DatePetite;
    t_date DateGrande;

    int i = compare_dates(date1, date2);
    if(i < 0){
        DateGrande = date2;
        DatePetite = date1;
    }else{
        DateGrande = date1;
        DatePetite = date2;
    }
    int ret=0;
    while (compare_dates(date1, date2) != 0){
        ret++;
        ajoute_jour(&DatePetite);
    }
    return -ret*i;
}


void saisis_recettes(int recettes[]){
    for (int i = 0; i < 12; i++){
        printf("Entrez la recette du mois de ");
        if(i == 0){
            printf("janvier :");
        }else if (i == 1){
            printf("fevrier :");
        }else if (i == 2){
            printf("mars :");
        }else if (i == 3){
            printf("avril :");
        }else if (i == 4){
            printf("mai :");
        }else if (i == 5){
            printf("Juin :");
        }else if (i == 6){
            printf("juillet :");
        }else if (i == 7){
            printf("aout :");
        }else if (i == 8){
            printf("septembre :");
        }else if (i == 9){
            printf("octobre :");
        }else if (i == 10){
            printf("Novembre :");
        }else{
            printf("decembre :");
        }
        scanf("%d",recettes[i]);
    }
}