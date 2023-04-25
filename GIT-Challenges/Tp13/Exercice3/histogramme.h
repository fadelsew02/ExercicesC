#ifndef DEF_TAB
#define DEF_TAB

#define VAL_MAX 255
void affiche_tableau(int tab[], int taille);
void decompte_valeurs(int tab[], int taille, int decompte[]);
void histogramme_horizontal(int decompte[], int taille_d);
void histogramme_vertical(int decompte[], int taille_d);
void regroupe_classes(int decompte[], int nbr_classes, int classes[]);
void regroupe_etoiles(int classes[], int nbr_classes, int etoiles[], int echelle);

#endif /* AF30A585_0AC1_4BF5_B27A_77066865ACFD */
