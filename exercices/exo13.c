#include<stdio.h>
#include<stdlib.h>

// initialisation du tableau en tant que variable globale
int imat[5][5]=
{{0,1,2,3,4},
{5,6,7,8,9},
{10,11,12,13,14},
{15,16,17,18,19},
{20,21,22,23,24},
};

//Déclaration de la fonction affiche_matrice
void affiche_matrice(int tab[5][5])
{
	int i,j;
	for(i=0; i<5; i++)
	{
		for(j=0; j<5; j++)
			printf("  %d   ",tab[i][j]);
		printf("\n");
		
	}
	

}

void main(void)
{
		// appal de la fonction affiche_matrice
	affiche_matrice(imat);
}