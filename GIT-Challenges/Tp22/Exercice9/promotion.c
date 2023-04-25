#include <stdio.h>
#include <stdlib.h>

#include "promotion.h"

t_etudiant saisis_etudiant(){
    t_etudiant stud;

    printf("\t >> Entrez le prenom: ");
    scanf("%s",&(stud.prenom));
    printf("\n\t >> Entrez le nom: ");
    scanf("%s",&(stud.nom));
    printf("\n\t >> Date de Naissance: ");
    stud.birthday = saisis_date();
    printf("\n\t >> Entrez le genre: ");
    scanf("%d",&(stud.genre));

    return stud;
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
    t_etudiant stud1;
    t_promo promotion;

    do{
        i++;
        printf("\n\t\t -- Etudiant n.%d -- \n\n",i);
        stud1 = saisis_etudiant();
        promotion.student[i]=stud1;
        printf("\n");
        printf("Voulez vous saisir un autre etudiant (1 pour oui/0) ? ");
        scanf("%d", &rep);
    }while((rep == 1) && (i <= TAILLE_MAX_PROMO));
    promotion.taille = i;
    printf("\n %d etudiants ont ete saisis. \n",i+1);

    system("cls");
    affiche_promotion(promotion);
}

void affiche_promotion(t_promo promot){
    for (int i = 0; i < promot.taille; i++){
        printf("%d. ",i);
        affiche_etudiant(promot.student[i]);
    }
}


t_promo initialise_promotion(){
     t_promo promo = {9,{  {"Emreoglu","Emre",{20,11,1985},0},
                            {"Zeynep","Ozurk",{8,8,1988},1},
                            {"Ozan","Ozanoglu",{10,10,1986},0},
                            {"Can","Canoglu",{8,8,1984},0},
                            {"Kucuk","Naz",{2,2,1985},1},
                            {"Kuakurt","Dilek",{7,7,1985},1},
                            {"Onay","Sevgi",{4,4,1985},1},
                            {"Kocak","Ozgur",{6,5,1985},0},
                            {"Kucuk","Hakan",{6,6,1986},0}
                        } };
    return promo;
}