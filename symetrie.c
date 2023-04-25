#include<stdio.h>
#include <stdlib.h>

int main(void) {
    int *tab = NULL;
    int taille, i, j;
    int egaux = 1;

    //Lecture de la taille du tableau
    printf("\nQuelle est la taille du tableau ?\t");
    scanf("%d", &taille);

    tab = malloc(taille*sizeof(int));

    printf("\nEntrez les elements du tableau \n");
    //Remplissage du tableu
    for (int i = 0; i < taille; i++)
        scanf("%d", &tab[i]);
    
    //verification de la symétrie
    i = 0;
    j = taille-1;
    while (egaux && i < j) {
        egaux = (tab[i] == tab[j]);
        i++; j--;
    }

    printf("\nLe tableau [ ");
    for (int i = 0; i < taille; i++)
    {
        printf("%d ", tab[i]);
    }
    printf("]");
    if (egaux)
    {
        printf(" est symetrique");
    }
    else
    {
        printf(" n'est pas symétrique");
    }
    free(tab);
}