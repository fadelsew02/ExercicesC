#ifndef PERMUTATION_H_
#define PERMUTATION_H_

#define N 5
void saisis_permutation(int perm[N]);
void affiche_permutation(int perm[N]);
int verifie_permutation(int perm[N]);
int est_identite(int perm[N]);
void compose_permutation(int perm1[N], int perm2[N], int resultat[N]);
void inverse_permutation(int perm[N], int resultat[N]);


#endif /*PERMUTATION_H_*/