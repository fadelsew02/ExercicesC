#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int a=0, b=0, x=0, y=0;
	printf("entrer les deux entiers\n");
	scanf("%d",&a);
	scanf("%d",&b);
	while(a<0 || b<0)
	{
		printf("entrée invalide, reessayer\n");
		scanf("%d",&a);
		scanf("%d",&b);
	}
	x= a % b;
	y=(a-x)/b;
	printf("%d est le quotient et %d est le reste de la division de %d par %d \n",y,x,a,b);
	return 0;

}