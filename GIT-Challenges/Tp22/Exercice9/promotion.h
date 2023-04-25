#ifndef __FICHIER__H__
#define __FICHIER__H__

#include "date.h"

#define TAILLE_MAX_NOM 10
#define TAILLE_MAX_PROMO 9

typedef enum {
    masculin,
    feminin
}t_genre;

typedef struct {
    char nom[TAILLE_MAX_NOM];
    char prenom[TAILLE_MAX_NOM];
    t_date birthday;
    t_genre genre;
}t_etudiant;

typedef struct{
    int taille;
    t_etudiant student[TAILLE_MAX_PROMO];
}t_promo;

t_etudiant saisis_etudiant();
void affiche_etudiant(t_etudiant student);
void saisis_promotion();
void affiche_promotion(t_promo prom);
t_promo initialise_promotion();


#endif  //!__FICHIER__H__