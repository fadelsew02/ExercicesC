#include<stdio.h>
#include<stdlib.h>

int main (void)
{
	int j=0, m=0, an=0, ver=0, a=0,i=1;
	do
	{
		printf("entrer une date../../....\n");
	scanf("%d",&j);
	scanf("%d",&m);
	scanf("%d",&an);
	if ((m<8 && m % 2 !=0) || (m>=8  && m % 2==0))
		a=31;
	else
		a=30;
	if(m>=1 && m<=12 && j>=1 && j<=a)
		printf("date valide\n");
	else if(m<1 || m >12 || j<1 || j>a)
		printf("date invalide\n");
	ver=0;
	if(ver==0)
		{
			j=j+1;
			if(j>a)
			{
				j=1;
				m=m+1;
			}
			
			if(m==13)
			{
				an=an+1;
			    m=1;
			}
				
		}
		printf("Nouvelle date: %d/%d/%d \n",j,m,an);
		printf("voulez vous continuer? Taper 1 pour oui et 0 pour non\n");
		scanf("%d",i);
	}while(i!=0);
	
		return 0;

}