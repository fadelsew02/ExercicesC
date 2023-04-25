#include <stdio.h>
#include <stdlib.h>

#include "promotion.h"

void saisis_etudiant(){
    t_etudiant stud;
    

    printf("\t >> Entrez le prenom: ");
    scanf("%s",&(stud.prenom));
    printf("\n\t >> Entrez le nom: ");
    scanf("%s",&(stud.nom));
    printf("\n\t >> Date de Naissance: ");
    stud.birthday = saisis_date();
    printf("\n\t >> Entrez le genre: ");
    scanf("%d",&(stud.genre));

    // system("cls");
    // affiche_etudiant(stud);

}

void affiche_etudiant(t_etudiant etudiant){
    t_date bthday = etudiant.birthday;
    if(etudiant.genre == 0){
        printf(" %s  %s, ne le ",etudiant.prenom, etudiant.nom);
        affiche_date(bthday.jour, bthday.mois, bthday.an);
    }else{
        printf(" %s  %s, nee le ",etudiant.prenom, etudiant.nom);
        affiche_date(bthday.jour, bthday.mois, bthday.an);
    }
    printf("\n");
}

void saisis_promotion(){
    int rep=0;
    int i=-1;

    do{
        i++;
        printf("\n\t\t -- Etudiant n.%d -- \n\n",i);
        saisis_etudiant();
        printf("\n");
        printf("Voulez vous saisir un autre etudiant (1 pour oui/0) ? ");
        scanf("%d", &rep);
    }while((rep == 1) && (i <= TAILLE_MAX_PROMO));

    printf("\n %d etudiants ont ete saisis. \n",i+1);
}