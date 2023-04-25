#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

/* Ce programme classe les noms entrés par l'utilisateur en ordre alphabétique */

int main(void)
{
	char *tab = NULL ;
	int nbredenoms = 0;
	int test = 0, i=0, j=0, l=0, p=0, k=0;
	char x[128];
	char nomprenoms[128];

	printf("Entrer le nombre de noms que vous souhaitez ranger\n");
	scanf("%d",&nbredenoms);
	tab = malloc(nbredenoms * sizeof(char));

	if(tab == NULL)
	{
		printf("Allocation échouée\n");
		exit(1);
	}
	for(i=0; i < nbredenoms; i++)
	{
		printf("Entrer nom et prenoms\n");
		gets(nomprenoms);
	    k=strlen(nomprenoms);
	    for(p = 0; p < k; p++)
	    {
	    	nomprenoms[p] = toupper(nomprenoms[p]);
	    }
	    strcpy(tab[i], nomprenoms);

	}
	printf("Configuration initiale:	");
	for(i=0; i<nbredenoms; i++)
	{
		printf("  %s ",tab[i]);
	}
	for(i=0; i<nbredenoms; i++)
	{
		for(j=0; j<nbredenoms; j++)
		{
			test = strcmp(tab[i],tab[j]);
			if(test < 0)
			{
				strcpy(x,tab[i]);
		        strcpy(tab[i],tab[j]);
		        strcpy(tab[j],x);
			}
			
		}		
	}
	for(l=0; l<nbredenoms; l++)
		{
			printf("  %s  ",tab[l]);
		}
		free(tab);

		return 0;
}
