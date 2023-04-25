#include<stdio.h>
#include<stdlib.h>
#define table 20

int main(int argc, char const *argv[])
{
	int longueur = 0, i = 0, j = 0;
	int tab[table];

	printf("Entrer la dimension du tableau\n\n");
	scanf("%d",&longueur);
	while(longueur > table)
	{
		longueur = table;
	}
	printf(" x | ");
	for(i = 0; i <= longueur; i++)
	{
		printf(" %5d ",i);
	}
	printf("\n");
	for(i = 0; i<=longueur; i++)
	{
		printf("----------------");
	}
	printf("\n");
	for(i = 0; i<=longueur; i++)
	{
		for(j = 0; j<=longueur; j++)
		{
			tab[j] = i*j;
		}
		printf(" %2d |", i);
		for(j = 0; j<=longueur; j++)
		{
			printf("  %3d  ",tab[j]);
		}
		printf("\n");

	}

	return 0;

}