#include<stdio.h>
#include<stdlib.h>

void remplir(int tab[], unsigned);
void afficher(int tab[], unsigned);
void copier(int tab[], unsigned);

int main(void)
{
    int *tab = NULL;
    unsigned int n = 0;
    printf("Entrer la dimension de votre tableau:\n\t");
    scanf("%d",&n);

    tab = malloc(n*sizeof(int));
    if(tab == NULL)
    {
        printf("Problème d'alloction\n");
        return EXIT_FAILURE;
    }
    remplir(tab, n);
    afficher(tab, n);
    copier(tab, n);

    free(tab);
    return 0;
}

void remplir(int *tab, unsigned n)
{
    for(int i = 0; i < n; i++)
    {
        printf("Entrer l'%cl%cment n%c  %d: ",121,233,176,i+1);
        scanf("%d",&tab[i]);
    }
}

void afficher(int *tab, unsigned n)
{
    for(int i = 0; i < n; i++)
    {
        printf("\t");
        printf("[%d]\n",tab[i]);
    }
}

void copier(int *tab, unsigned n)
{
    int *tabnegatif = NULL;
    int *tabpositif =NULL;
    int j = 0, k = 0, j1 = 0, k1 = 0;

    for(int i = 0; i < n; i++)
    {
        if(tab[i] < 0)
        {
            j++;
        }
        else if(tab[i] > 0)
        {
            k++;
        }
    }
    tabnegatif = malloc(j*sizeof(int));
    tabpositif = malloc(k*sizeof(int));
    j1 = 0, k1 = 0;

    for(int i = 0; i < n; i++)
    {
        if(tab[i] < 0)
        {
            tabnegatif[j1] = tab[i];
            j1++;
        }
        else if(tab[i] > 0)
        {
            tabpositif[k1] = tab[i];
            k1++;
        }
    }

    printf("Eléments du Tableau négatif\n");
    for(int i = 0; i < j; i++)
    {
        printf("\t");
        printf("[%d]\n",tabnegatif[i]);
    }

    printf("Eléments du Tableau positif\n\t");
    for(int i = 0; i < k; i++)
    {
        printf("[%d]\n",tabpositif[i]);
        printf("\t");
    }

    free(tabnegatif);
    free(tabpositif);
}
