#include<stdio.h>
#include<stdlib.h>

int main(void) 
{
	int entier1=0, entier2=0;
	int ppcm=0, a=0, b=0;
	int i=1, rep;
	do
	{
		printf("Entrer les deux entiers dont vous voulez le ppcm\n");
		scanf("%d",&entier1);
		scanf("%d",&entier2);
		while(entier1 < 0 || entier2 < 0)
		{
			printf("Deux entiers positifs stp\n");
			scanf("%d %d",&entier1,&entier2);
		}
		if(entier1 < entier2)
		{
			ppcm = entier2;
		}
		else
		{
			ppcm = entier1;
		}
		a = ppcm%entier1;
		b = ppcm%entier2;
		
		while(a!=0 || b!=0)
		{
			a = ppcm%entier1;
			b = ppcm%entier2;
			if(a==0 && b==0)
			{
				printf("Le ppcm de %d et de %d est %d\n",entier1,entier2,ppcm);
			    break;
			}
			++ppcm;
		}
		printf("Voulez vous continuer? Taper 1 pour oui et 2 pour non\n");
		scanf("%d",&rep);
		while(rep != 1 && rep != 2)
		{
			printf("Suis les instructions\n");
			scanf("%d",&rep);
		}
	}while(rep==i);
	
}