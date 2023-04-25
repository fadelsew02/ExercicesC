#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void  dichsinus(void);
void  dichcosinus(void);
void  dichasin(void);
void  dichacos(void);
void  dichsinh(void);
void  dichcosh(void);


int main(void)
{
	int choix = 0;

	printf("De quel type de fonction souhaitez vous connaitre le zero?\n");
	printf("------------------------------------------------------------\n\n");
	printf("          1 - Fonction sinus\n ");
	printf("          2 - Fonction cosinus\n ");
	printf("          3 - Fonction sinh\n ");
	printf("          4 - Fonction cosh\n ");
	printf("          5 - Fonction asin\n ");
	printf("          6 - Fonction acos\n ");
	printf("          7 - Fonction equation degre 2\n ");
	printf("          8 - Fonction equation degre 3\n ");
	scanf("%d",&choix);
	printf("=================================================================\n\n");

	switch(choix)
	{
		case 1:
		    dichsinus();
		    break;
		case 2:
		    dichcosinus();
		    break;
		case 3:
		    dichsinh();
		    break;
		case 4:
		    dichcosh();
		    break;
		case 5:
		    dichasin();
		    break;
		case 6:
		    dichacos();
		    break; 
		default:
		    printf("Commande inconnue\n\n\n");
		    break;                                
	}

	return 0;
}

   
    /*Cas où la réponse est la fonction sinus*/
void  dichsinus(void)
{
	double bornea = 0, borneb = 0;
	double milieu = 0;
	double fa = 0, fb = 0, fm = 0, r = 0;

	printf("Entrer les bornes de l'intervalle\n");
	scanf("%f %f",&bornea,&borneb);
	while((bornea < -1.0) || (borneb > 1.0) || (bornea > 1.0) || (borneb < -1.0))
	{
		printf("la fonction est definie sur [-1;1]");
		scanf("%f %f",&bornea,&borneb);
	}
	if(borneb < bornea)
	{
		r = bornea;
		bornea = borneb;
		borneb = r;
	} 
	fa = sin(bornea);
	fb = sin(borneb);
	while(borneb - bornea > 0)
	{
		milieu = (borneb + bornea)/2.0;
		fm = sin(milieu);
		if(fm == 0)
			break;
		if(fa*fm < 0)
		{
			borneb = milieu;
			fb = fm;
		}
		else
		{
			bornea = milieu;
			fa = fm;
		}
	}
		printf("Le zero est %5f \n",fm);

}

    /*Cas où la réponse est la fonction cosinus*/
void dichcosinus(void)
{
	double bornea = 0, borneb = 0;
	double milieu = 0;
	double fa = 0, fb = 0, fm = 0, r = 0;

	printf("Entrer les bornes de l'intervalle\n");
	scanf("%f %f",&bornea,&borneb);
	while((bornea < -1.0) || (borneb > 1.0) || (bornea > 1.0) || (borneb < -1.0))
	{
		printf("la fonction est definie sur [-1;1]");
		scanf("%f %f",&bornea,&borneb);
	}
	if(borneb < bornea)
	{
    	r = bornea;
		bornea = borneb;
		borneb = r;
	} 
	fa = cos(bornea);
	fb = cos(borneb);
	while(borneb - bornea > 0)
	{
		milieu = (borneb + bornea)/2.0;
		fm = cos(milieu);
		if(fm == 0)
			break;
		if(fa*fm < 0)
		{
			borneb = milieu;
			fb = fm;
		}
		else
		{
			bornea = milieu;
			fa = fm;
		}
	}
	printf("Le zero est %5f \n",fm);

}


    /*Cas où la réponse est la fonction sinushyperpolique*/
void dichsinh(void)
{
	double bornea = 0, borneb = 0;
	double milieu = 0;
	double fa = 0, fb = 0, fm = 0, r = 0;

	printf("Entrer les bornes de l'intervalle\n");
	scanf("%f %f",&bornea,&borneb);
	if(borneb < bornea)
	{
		r = bornea;
		bornea = borneb;
		borneb = r;
	} 
	fa = sinh(bornea);
	fb = sinh(borneb);
	while(borneb - bornea > 0)
	{
		milieu = (borneb + bornea)/2.0;
		fm = sinh(milieu);
		if(fm == 0)
			break;
		if(fa*fm < 0)
		{
			borneb = milieu;
			fb = fm;
		}
		else
		{
			bornea = milieu;
			fa = fm;
		}
	}
	printf("Le zero est %5f \n",fm);

}



    /*Cas où la réponse est la fonction cosinushyperbolique*/
void dichcosh(void)
{
	double bornea = 0, borneb = 0;
	double milieu = 0;
	double fa = 0, fb = 0, fm = 0, r = 0;

	printf("Entrer les bornes de l'intervalle\n");
	scanf("%f %f",&bornea,&borneb);
	if(borneb < bornea)
	{
		r = bornea;
		bornea = borneb;
		borneb = r;
	} 
	fa = cosh(bornea);
	fb = cosh(borneb);
	while(borneb - bornea > 0)
	{
		milieu = (borneb + bornea)/2.0;
		fm = cosh(milieu);
		if(fm == 0)
			break;
		if(fa*fm < 0)
		{
			borneb = milieu;
	     	fb = fm;
		}
		else
		{
			bornea = milieu;
			fa = fm;
		}
	}
	printf("Le zero est %5f \n",fm);

}



	 /*Cas où la réponse est la fonction arcsinus*/
void dichasin(void)
{
	double bornea = 0, borneb = 0;
	double milieu = 0;
	double fa = 0, fb = 0, fm = 0, r = 0;

	printf("Entrer les bornes de l'intervalle\n");
	scanf("%f %f",&bornea,&borneb);
	while((bornea < -1.0) || (borneb > 1.0) || (bornea > 1.0) || (borneb < -1.0))
	{
		printf("la fonction est definie sur [-1;1]");
		scanf("%f %f",&bornea,&borneb);
	}
	if(borneb < bornea)
	{
		r = bornea;
		bornea = borneb;
		borneb = r;
	} 
	fa = asin(bornea);
	fb = asin(borneb);
	while(borneb - bornea > 0)
	{
		milieu = (borneb + bornea)/2.0;
		fm = asin(milieu);
		if(fm == 0)
			break;
		if(fa*fm < 0)
		{
			borneb = milieu;
			fb = fm;
		}
		else
		{
			bornea = milieu;
			fa = fm;
		}
	}
	printf("Le zero est %5f \n",fm);

}





    /*Cas où la réponse est la fonction arccosinus*/
void dichacos(void)
{
	double bornea = 0, borneb = 0;
	double milieu = 0;
	double fa = 0, fb = 0, fm = 0, r = 0;

	printf("Entrer les bornes de l'intervalle\n");
	scanf("%f %f",&bornea,&borneb);
	while((bornea < -1.0) || (borneb > 1.0) || (bornea > 1.0) || (borneb < -1.0))
	{
		printf("la fonction est definie sur [-1;1]");
		scanf("%f %f",&bornea,&borneb);
	}
	if(borneb < bornea)
	{
		r = bornea;
		bornea = borneb;
		borneb = r;
	} 
	fa = acos(bornea);
	fb = acos(borneb);
	while(borneb - bornea > 0)
	{
		milieu = (borneb + bornea)/2.0;
		fm = acos(milieu);
		if(fm == 0)
			break;
		if(fa*fm < 0)
		{
			borneb = milieu;
			fb = fm;
		}
		else
		{
			bornea = milieu;
			fa = fm;
		}
	}
	printf("Le zero est %5f \n",fm);

}



