#include<stdio.h>
#include<stdlib.h>
/*Ce programme fera ressortir le nombre de jours de n'importe quel mois*/

/*Ecriture de la procédure d'initialisation*/
// void initialisation(int inb_jours[12])
// {
	// int i=0;
	// for(i=0; i<=12; i++)
	// {
		// if(i==0)
		// {
			// inb_jours[i]=0;
		// }
		// else if(i==2)
		// {
			// inb_jours[i]=28;
		// }
		// else if((i % 2 ==0 && i<=7)||(i % 2 != 0 && i>7))
		// {
			// inb_jours[i]=30;
		// }else 
		// {
			// inb_jours[i]=31;
		// }
	// }

// }
// --------fin de la premiere procédure-------

/*--------Début de la seconde procédure Impression--------*/
// void impression(int inb_jours[12])
// {
	// int i;
	// for(i=0; i<=12; i++)
	// {
		// printf("%d",inb_jours[i]);
		// printf("\n");
	// }
// }

/*Début de la procédure principale*/
// void main(void)
// {
   // int inb_jours[12];
   // appel de la procédure initialisation
   // initialisation( inb_jours);

   // appel de la procédure impression
   // impression( inb_jours);
// }


/*----------------------------------------------------------------------------------------------*/


/*----------Variante du programme avec participation dz l'utilisateur----------*/

/*----déclaration de fonction------*/
void affiche_jours(int mois)
{
	if(mois==2)
	{
		printf("nombre de jours =28 ou 29\n");
	}
	else if((mois % 2 ==0 && mois<=7)||(mois % 2 != 0 && mois>7))
	{
		printf("nombre de jours=30\n");
	}
	else 
	{
		printf("nombre de jours=31\n");
	}

}

int main(void)
{
	int mois=0;
	printf("entrer le numéro du mois \n");
	scanf("%d",&mois);
	while(mois<1 || mois>12)
	{
		printf("suis les instructions\n");
		scanf("%d",&mois);
	}
	affiche_jours(mois);
	return 0;
}