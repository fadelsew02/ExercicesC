#include<stdio.h>
#include<stdlib.h>
/*programme de multiplication suivant le modèle suivant
a*b=a*(b-1)+a si b est impair
a*b=(2*a)*(b/2) si b est pair et différent de 0
*/
/*-----------Début du programme-----------*/

int main(void)
{
	int a=0, b=0, c=0, d=0, res=0;
	printf("entrer les entiers a et b\n");
	scanf("%d",&a);
	scanf("%d",&b);
	/*exclusion du cas où b==0*/
	while(b==0)
	{
		printf("entre une valeur positive pour b\n");
		scanf("%d",&b);
	}
	/*Définition du plus grand entier et du plus petit entier*/
	if(a<b)
	{
		c=a;
		d=b;
	}
	else
	{
		c=b;
		d=a;
	}
	while(c != 0)
	{
		if(c % 2 != 0)
		{
			c--;
			res+=d;
			printf("        =%d*%d + %d\n",d,c,res);
        }
        d*=2;
        c/=2;
        printf("            =%d * %d + %d \n",d,c,res);

	}
	 printf("              =%d\n",res);

	return 0;

}