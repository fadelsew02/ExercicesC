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

    system("cls");
    affiche_etudiant(stud);

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