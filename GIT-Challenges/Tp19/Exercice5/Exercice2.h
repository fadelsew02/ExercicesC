
#ifndef __EXERCICE2__H__
#define __EXERCICE2__H__


    typedef enum{
        gauche = -1,
        droite = 1
    }t_girouette;

    typedef struct {
        int valeur;
        t_girouette girouette;
    }t_entier_girouette;

    void initialise_permutation(t_entier_girouette tab[], int n);
    void affiche_permutation(t_entier_girouette tab[], int n);
    int identifie_pgem(t_entier_girouette tab[], int n);
    int is_ok(int perm, t_entier_girouette tab[], int n, int max);

#endif  //__EXERCICE2__H__
