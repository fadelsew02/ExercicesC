#include<stdio.h>
#include<stdlib.h>
#include<float.h>
#include<math.h>

int main(void)
{
	int entier=0, premier=0, dernier=0, l=0, i=1, rep;
	do
	{
		printf("Entrer un entier\n");
	    scanf("%d",&entier);
	    l=log10(entier);
	    premier=entier/pow(10,l);
	    dernier=fmod(entier, 10);
	    printf("Le premier chiffre est %d et le dernier chiffre est %d\n",premier,dernier);
	    printf("Voulez vous continuer? Taper 1 pour OUI et 2 pour NON\n");
	    scanf("%d",&rep);
	    while(rep != 1 && rep != 2)
	    {
	    	 printf("Suivez les instructions\n");
	    	 scanf("%d",&rep);
	    }

	}while(i==rep);

	
}