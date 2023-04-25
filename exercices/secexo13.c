#include<stdio.h>
#include<stdlib.h>

void affiche_matrix(int tab[20][20])
{
	int i,j;
	int nlignes,ncolonnes;
	printf("Donner les dimensions de la matrice 20 au max\n\n");
	scanf("%d",&nlignes);
	scanf("%d",&ncolonnes);
	printf("Now enter the element of matrix\n");
	for(i=0; i<nlignes; i++)
	{
		for(j=0; j<ncolonnes; j++)
			scanf("%d",&tab[i][j]);
	}
	for(i=0; i<nlignes; i++)
	{
		for(j=0; j<ncolonnes; j++)
			printf("  %d  ",tab[i][j]);
		printf("\n");
	}
}

void main(void)
{
	int mat[20][20];
	affiche_matrix(mat);

}