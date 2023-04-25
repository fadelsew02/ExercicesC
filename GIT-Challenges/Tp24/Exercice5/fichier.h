#ifndef FICHIER_HPP
#define FICHIER_HPP

#define n 2
#define PI 3.141592654

typedef struct{
    double x;
    double y;
}s_vecteur;

void affiche_matrice(double mat[n][n]);
void initialise_rotation(double mat[n][n]);
void affiche_vecteur(s_vecteur vect);
void applique_rotation(double m[n][n], s_vecteur v, s_vecteur* resultat);

#endif // FICHIER_HPP
