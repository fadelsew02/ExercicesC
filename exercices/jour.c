#include<stdio.h>
#include<stdlib.h>
/*Ce programme détermine le jour correspondant à la date rentré par l'utilisateur
Soit Lundi, Mardi, Mercredi, Jeudi, Vendredi, Samedi, Dimanche*/

int main(void)
{
	int jour = 0, mois = 0,an = 0, ver = 0, nb_jours = 0, nbre_jours = 0, diff = 0,i = 0, som = 0, a = 0, j = 0;
	int rep = 0, p = 1;
	do
	{
		do
	    {
		    printf("entrer une date valide jj/mm/aaaa\n");
	        scanf("%d %d %d",&jour, &mois, &an);
	        if ((mois<8 && mois % 2 !=0) || (mois >=8  && mois % 2==0))
	        {
		        a = 31;
	        }
	        else
	        {
	    	    a = 30;
	        }
	        if(mois >= 1 && mois <= 12 && jour >= 1 && jour <= a)
	        {
		        printf("date valide\n");
		        ver = 0;
	        }
	        else if(mois < 1 || mois > 12 || jour < 1 || jour > a)
	        {
		        printf("date invalide\n");
		        ver = 1;
	        }
	    }while(ver == 1);
	    diff = an - 1;
	    nbre_jours = diff * 365;
	    if(an > 1582) //Calendrier grégorien
	    {
		    nbre_jours += (diff/4);
		    nbre_jours -= (diff/100);
		    nbre_jours += (diff/400);
		    nbre_jours += 2; 
	    }
	    else if(an <= 1582) //Calendrier julien
	    {
		    nbre_jours += (diff/4);//4 parce que les années bixestiles se répètent chaque 4 ans
	    }
	    for(i=1; i<mois; i++)
	    {
		    if(an > 1582)
		    {
			    if(i == 2)
		        {
			        if((an % 4 == 0)&&(an % 100 != 0) || (an % 400 == 0))
			        {
			    	    som = som + 29;
			        }
			        else
			        {
				        som = som + 28;
			        }
		        }
		    }
		    else
		    {
			    if(i == 2)
		        {
			        if(an % 4==0)
			        {
			    	    som = som + 29;
			        }
			        else
			        {
				        som = som + 28;
			        }
		        }
		    } 
		    if((i<8 && i % 2 !=0) || (i >=8  && i % 2==0))
		    {
			    som = som + 31;
		    }
		    else if((i==4)||(i==6)||(i==9)||(i==11))
		    {
			    som = som +30;
		    }
		
	    }
	    som =som + (jour-1);
	    nb_jours = nbre_jours + som;
	    j = nb_jours % 7;
	   if(j == 0)
	    {
		    printf("C'est un Samedi\n");
	    }
	    else if(j == 1)
	    {
		    printf("C'est un Dimanche\n");
	    }
	    else if(j == 2)
	    {
		    printf("C'est un Lundi\n");
	    }
	    else if(j == 3)
	    {
		    printf("C'est un Mardi\n");
	    }
	    else if(j == 4)
	    {
		    printf("C'est un Mercredi\n");
	    }
	    else if(j == 5)
	    {
		    printf("C'est un Jeudi\n");
	    }
	    else if(j == 6)
	    {
		    printf("C'est un Vendredi\n");
	    }
	    printf("Voulez vous continuer? Taper 1 pour Oui et autre chiffre pour Non\n");
	    scanf("%d",&rep);
	}while(rep == p);
	

	return 0;

}