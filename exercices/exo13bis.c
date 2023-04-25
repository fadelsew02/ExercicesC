#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int matrix[20][20];
	int i,j;
	int nlignes, ncolonnes;
	printf("entrer le nombre de lignes de la matrice 20 max\n");
	scanf("%d",&nlignes);
	printf("entrer le nombre de colonnes de la matrice 20 max\n");
	scanf("%d",&ncolonnes);
	printf("entrer les éléments de la matrice\n\n");
	for(i=0; i<nlignes; i++)
	{
		for(j=0; j<ncolonnes; j++)
			scanf("%d",&matrix[i][j]);
	}
	for(i=0; i<nlignes; i++)
	{
		for(j=0; j<ncolonnes; j++)
			printf("  %d  ",matrix[i][j]);
		printf("\n");
	}   
	return 0;

}