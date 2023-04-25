#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int PGCD(int entier1, int entier2);
int PPCM(int entier1, int entier2);
int factoriel(int entier);

int main(void)
{
	int entier1=0, entier2=0, resultat1=0, entier=0;
	int signe=0, i=1, choix=0, rep;
	double reel1=0, reel2=0, resultat2=0, reel = 0, re = 0;
	const double pi = 22.0/7.0;
	do
	{
		printf("Souhaitez vous travailler avec des entiers ou réels?\n\n");
		printf("1- Entiers\n");
		printf("2- Réels\n");
		scanf("%d",&choix);
		while(choix != 1 && choix != 2)
		{
			printf(" Suivez les directives\n");
			scanf("%d",&choix);
		}
		if(choix==1)
		{
			printf("-------------MENU DE LA CALCULATRICE---------------\n\n");
			printf("quel opération souhaitez vous faire?\n");
			printf("              1 pour l'addition(+)\n");
			printf("              2 pour la soustraction(-)\n");
			printf("              3 pour la multiplication(*)\n");
			printf("              4 pour la division(/)\n");
			printf("              5 pour le modulo(%)\n");
			printf("              6 pour le PPCM de deux entiers\n");
			printf("              7 pour le PGCD de deux entiers\n");
			printf("              8 pour le factoriel\n");
			scanf("%d",&signe);
			if(signe == 1 || signe == 2 || signe == 3 || signe == 4 || signe == 5 || signe == 6 || signe == 7)
			{
				printf("entrer les deux entiers\n");
			    scanf("%d %d",&entier1, &entier2);
			}
			else if(signe == 8)
			{
				printf("Entrer l'entier\n");
				scanf("%d",&entier);
			}

			switch(signe)
			{
				case 1:
			        resultat1 = entier1 + entier2;
			        printf("%d + %d = %d\n",entier1,entier2,resultat1);
			        break;
			    case 2:
			        resultat1 = entier1 - entier2;
			        printf("%d - %d = %d\n",entier1,entier2,resultat1);
			        break;
			    case 3:
			        resultat1 = entier1 * entier2;
			        printf("%d * %d = %d\n",entier1,entier2,resultat1);
			        break;
			    case 4:
			        resultat1 = entier1 / entier2;
			        printf("%d / %d = %d\n",entier1,entier2,resultat1);
			        break;
			    case 5:
			        resultat1 = entier1 % entier2;
			        printf("%d modulo %d = %d\n",entier1,entier2,resultat1);
			        break;
			    case 6:
			        if(entier1 < 0)
			        {
			        	entier1 = entier1*(-1);
			        }
			        if(entier2 < 0)
			        {
			        	entier2 = entier2*(-1);
			        }
			        resultat1 = PPCM(entier1, entier2);
			        break;
			    case 7:
			        if(entier1 < 0)
			        {
			        	entier1 = entier1*(-1);
			        }
			        if(entier2 < 0)
			        {
			        	entier2 = entier2*(-1);
			        }
			        resultat1 = PGCD(entier1, entier2);
			        printf("Le PGCD des deux entiers est %d \n",resultat1);
			        break;
			    case 8 :
			        if(entier < 0)
			        {
			        	entier = entier*(-1);
			        }
			        resultat1 = factoriel(entier);
			        printf("Le factoriel de %d est %d \n",entier,resultat1);
			        break;    
			    default:
			       printf("commande inconnue\n\n");
			        break;    
			 }
		}
		else
		{
			printf("-------------MENU DE LA CALCULATRICE---------------\n\n");
			printf("quel opération souhaitez vous faire?\n");
			printf("              1 pour l'addition(+)\n");
			printf("              2 pour la soustraction(-)\n");
			printf("              3 pour la multiplication(*)\n");
			printf("              4 pour la division(/)\n");
			printf("              5 pour le sinus d'un angle en radian\n");
			printf("              6 pour le cosinus d'un angle en radian\n");
			printf("              7 pour le arcsinus d'un angle en radian\n");
			printf("              8 pour la arccosinus d'un angle en radian\n");
			printf("              9 pour le sinh d'un angle en radian\n");
			printf("              10 pour la cosh d'un angle en radian\n");
			scanf("%d",&signe);
			if(signe == 1 || signe == 2 || signe == 3 || signe == 4)
			{
				printf("entrer les deux réels\n");
			    scanf("%f %f",&reel1, &reel2);
			}
			else if(signe == 5 || signe == 6 || signe == 7 || signe == 8|| signe == 9|| signe == 10)
			{
				printf("Entrer l'angle\n");
				scanf("%f",&reel);
			}

			switch(signe)
			{
				case 1:
			        resultat2 = reel1 + reel2;
			        printf("%f + %f = %f\n",reel1,reel2,resultat2);
			        break;
			    case 2:
			        resultat2 = reel1 - reel2;
			        printf("%f - %f = %f\n",reel1,reel2,resultat2);
			        break;
			    case 3:
			        resultat2 = reel1 * reel2;
			        printf("%f * %f = %f\n",reel1,reel2,resultat2);
			        break;
			    case 4:
			        resultat2 = reel1 / reel2;
			        printf("%f / %f = %f\n",reel1,reel2,resultat2);
			        break;
			    case 5:
			        re = (reel*pi)/180;
			        resultat2 = sin(re);
			        printf("sin(%f) = %lf \n",re,resultat2);
			        break;
			    case 6:
			        re = (reel*pi)/180.0;
			        printf("%f",re);
			        resultat2 = cos(re);
			        printf("cos(%f) = %lf \n",re,resultat2);
			        break;
			    case 7:
			        re = (reel*pi)/180;
			        resultat2 = asin(re);
			        printf("asin(%f) = %lf \n ",re,resultat2);
			        break;   
			    case 8:
			        re = (reel*pi)/180;
			        resultat2 = acos(re);
			        printf("acos(%f) = %lf \n",re,resultat2);
			        break; 
			    case 9:
			        re = (reel*pi)/180;
			        resultat2 = sinh(re);
			        printf("sinh(%f) = %lf \n",re,resultat2);
			        break;   
			    case 10:
			        re = (reel*pi)/180;
			        resultat2 = cosh(re);
			        printf("cosh(%f) = %lf \n",re,resultat2);
			        break;          
			    default:
			       printf("commande inconnue\n\n");
			        break; 
			}   

	    }
		 printf("souhaites-tu continuer? 1 pour oui et autre entier pour non\n");
	     scanf("%d",&rep);

	}while(i==rep);
	return 0;
}




int PPCM(int entier1, int entier2)
{
	int ppcm = 0;
	int a = 0, b = 0;
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
				printf("Le PPCM de %d et de %d est %d\n",entier1,entier2,ppcm);
			    break;
			}
			++ppcm;
		}
		return ppcm;
}



int PGCD(int entier1, int entier2)
{
	int pgcd = 0;
	do
	{
		if(entier1 >= entier2)
		{
			entier1 = entier1 - entier2;
		}
		else if(entier2 >= entier1)
		{
			entier2 = entier2 - entier1;
		}
	}while(entier1*entier2 != 0);
	if(entier1==0)
	{
		pgcd = entier2;
	}
	else 
	{
		pgcd = entier1;
	}
	return pgcd;
}

int factoriel(int entier)
{
	int facto = 1;
	int i = 1;
	if(entier <= 1)
	{
		facto = 1;
	}
	else
	{
		for(i=1; i <= entier; i++)
		{
			facto = facto*i;
		}
	}
	return facto;
}