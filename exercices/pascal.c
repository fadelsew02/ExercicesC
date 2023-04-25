#include<stdio.h>
#include<stdlib.h>
#define nmax 20

int main(void)
{
	int nbrelignes = 0;
    int i =0, j = 0;
    int tab[nmax];


	printf("Entrer le nombres de lignes voulus\n\n");
	scanf("%d",&nbrelignes);
	if(nbrelignes > nmax)
	{
		nbrelignes = nmax;
	}
    printf("\n\n    p");
    for(i = 0; i<nbrelignes; i++)
    {
    	printf(" %d ",i);
    }

    printf("\n n \n");
    for(i = 0; i<=nbrelignes; i++)
    {
    	printf("----");
    }
    printf("\n");

	for(i = 0; i < nbrelignes; i++)
	{
		tab[i] = 1;
		for(j = i-1; j > 0; j--)
		{
			tab[j] = tab[i] + tab[j-1];
		}
		printf(" %d | ",i);
		for(j = 0; j<=i; j++)
	    {
		    printf(" %d ",tab[j]);
	    }
	    printf("\n");
	}


	return 0;
	
}
