#include<stdio.h>
#include<stdlib.h>

#DEFINE TRUE 1;
#DEFINE FALSE 0;

int main(void)
{
    int *tab1 = NULL;
    int symetric = TRUE;
    int taille = 0;
    int k = 0;

    printf("Entrer la taille du tableau \n\t\t");
    scanf("%d",&taille);

    tab1 = malloc(taille*sizeof(int));
    if (tab1 == NULL)
    {
        printf("Problème d'allocation\n");
        return EXIT_FAILURE;
    }

    printf("Entrer les éléments du tableau\n\t\t")
    for (int i = 0; i < taille; i++)
    {
        scanf("%d",&tab1[i]);
        printf("\n\t\t");
    }

    while(symetric == TRUE)
    {
        if(tab[k] != tab[taille-k-1])
        {
            symetric = FALSE;
        }
        k++;

    }
    printf("Le tableau est symétrique\n");
    free(tab1);
    return 0;
}
