#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

void affiche_tableau(int (*tab), unsigned n,unsigned m)
{
    for (unsigned i = 0; i < n; ++i)
        for (unsigned j = 0; j < m; ++j) {
            tab[i][j] = i * m + j;
            printf("tab[%u][%u] = %d\n", i, j, tab[i][j]);
        }
} 
int main(void)
{
    size_t n, m;

    printf("Entrez la longueur et la largeur du tableau : ");

    if (scanf("%zu %zu", &n, &m) != 2)
    {
        printf("Erreur lors de la saisie\n");
        return EXIT_FAILURE;
    }

    int tab[n][m];

    affiche_tableau(tab, n, m);
        return 0;
}
