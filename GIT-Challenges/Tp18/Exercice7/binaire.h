
#ifndef BINAIRE_H_
#define BINAIRE_H_

#define N 9

void affiche_binaire(int nombre[N], int longueur);
int est_binaire(int nombre[N], int longueur);
void divise_binaire(int x,int *q, int *r);                   
void calcule_addition(int nombre1[N], int longueur1, int nombre2[N],int longueur2,int nombre3[N], int *longueur3);

#endif /* BINAIRE_H_ */

