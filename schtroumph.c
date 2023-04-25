#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
    int *tab1 = NULL;
    int *tab2 = NULL;
    int som = 0,  prod = 0;
    unsigned taille1 = 0, taille2 = 0;
    
    /*---------------------------Demande de la taille des deux tableaux----------------------*/
    printf("Entrer la taille du premier tableau: \n");
    scanf("%d",&taille1);
    printf("Entrer la taille du second tableau: \n");
    scanf("%d",&taille2);
    /*----------------------------------------------------------------------------------------*/

    tab1 = malloc(taille1*sizeof(int));
    tab2 = malloc(taille2*sizeof(int));
    if (tab1 == NULL || tab2 == NULL)
    {
    	printf("Problème d'allocation\n");
    	return EXIT_FAILURE;
    }

    /*---------------Fin d'allocation-----------------------------------------------*/

    /*------------------Initialisation des deux tableaux----------------------------*/
    printf("Entrer les différentes éléments du tableau 1\n");
    for (int i1 = 0; i1 < taille1; ++i1)
    {
    	scanf("%d",tab1[i1]);
    }
    printf("Les éléments du second tableau\n");
    for (int i2 = 0; i2 < taille2; ++i2)
    {
    	scanf("%d",tab2[i2]);
    }
    /*--------------------------------Fin d'initialisation-------------------------------------*/
    som = 0;
    prod = 0;

    for (int i3 = 0; i3 < taille2; ++i3)
    {
    	for (int i4 = 0; i4 < taille1; ++i4)
    	{
    		prod = tab1[i4]*tab2[i3];
    		som = som + prod;
    	}
    }

    printf("La somme est: %d ", som);

    free(tab1);
    free(tab2);
	return 0;