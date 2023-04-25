#include<stdio.h>
#include<stdlib.h>


/*Ce programme range les éléments d'un tableau par la méthode de tri par permutation */

int main(void)
{
	int taille = 0, x = 0, i = 0, j = 0, l=0, val=0, r = 0;
	int *tab = NULL;
	printf("Enter the size of table\n");
	scanf("%d",&taille);
	tab = malloc(taille * sizeof(int));
	if(tab == NULL)
	{
		printf("Allocation echouee\n");
		exit(1);
	}
		
	for(i=0; i<taille; i++)
	{
		printf("Enter the element of table\n");
		scanf("%d",&tab[i]);
	}

	printf("Configuration initiale:	");
	for(i=0; i<taille; i++)
	{
		printf("  %d  ",tab[i]);
	}
	
	for(i=0; i<taille; i++)
	{
		for(j=0; j<taille; j++)
		{
			if(tab[i]<tab[j])
			{
				x=tab[i];
		        tab[i]=tab[j];
		        tab[j]=x;
			}
			
		}
		printf("\n\nConfiguration apres passage n°%d :",i+1);
		for(l=0; l<taille; l++)
		{
			printf("  %d  ",tab[l]);
		}
		

			
	}
	printf("\n\n\n");
	printf("Enter a new value\n");
	scanf("%d",&val);
	for(i=0; i<taille; i++)
	{
		if(val < tab[i])
		{
			r = val;
			val = tab[i];
			tab[i] = r;
		}

	}
	printf("\n\n Nouvelle configuration : ");
	for(l=0; l<taille; l++)
		{
			printf("  %d  ",tab[l]);
		}

	free(tab);
	return 0;
}