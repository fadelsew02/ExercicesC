#ifndef __FICHIER__H__
#define __FICHIER__H__

#define n 10

typedef enum{
    rond,
    croix
}t_symbole;

void affiche_cl(int matrice[n][n]);
void genere_cl_permutation(int matrice[n][n]);
void initialise_ronds_matrice(t_symbole matrice[n][n]);
int compte_ronds_matrice(t_symbole matrice[n][n]);
int contient_rond_matrice(t_symbole matrice[n][n]);
int teste_vecteur(int m[n][n], int pos, int ligne);
int est_carre_latin(int m[n][n]);

#endif  //!__FICHIER__H__
