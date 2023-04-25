#ifndef __FICHIER__H__
#define __FICHIER__H__

#include "date.h"

#define TAILLE_MAX_NOM 20

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

void saisis_etudiant();
void affiche_etudiant(t_etudiant student);


#endif  //!__FICHIER__H__