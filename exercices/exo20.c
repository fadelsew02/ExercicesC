#include<stdio.h>
#include<stdlib.h>
#include<float.h>
#include<math.h>

int main(void)
{
	int premier=0, dernier=0, l=0, i=1, rep, r=0;
	int newreel=0;
	float reel=0;
	do
	{
		printf("Entrer un reel\n");
	    scanf("%f",&reel);
	    FLT_DIG(reel, r);
	    printf("%d",r);
	    newreel=reel*pow(10,r);
	    l=log10(newreel);
	    premier=newreel/pow(10,l);
	    dernier=fmod(newreel, 10);
	    printf("Le premier chiffre est %d et le dernier chiffre est %d\n",premier,dernier);
	    printf("Voulez vous continuer? Taper 1 pour OUI et 2 pour NON\n");
	    scanf("%d",&rep);
	    while(rep != 1 && rep != 2)
	    {
	    	 printf("Suivez les instructions\n");
	    	 scanf("%d",&rep);
	    }

	}while(i==rep);
	return 0;
	
}

	
