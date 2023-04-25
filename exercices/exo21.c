#include<stdio.h>
#include<math.h>

int main(void)
{
	int entier=0, pair=0, impair=0, reste=0, somme=0, inverse=0, l=0;

	printf("Entrer un entier\n");
	scanf("%d",&entier);
	l=log10(entier);
	l++;
	printf("Le nombre de chiffres dans votre entier est %d\n",l);
	while(entier != 0)
	{
		reste = fmod(entier,10);
		if(reste % 2 == 0)
		{
			pair++;

		}
		else
		{
			impair++;
		}
		somme+=reste;
		inverse=inverse*10+reste;
		entier = entier / 10;
		
	}
	somme=somme+entier;
    printf("le nombre de chiffres pairs est %d et impairs est %d\n",pair,impair);
    printf("La somme des chiffres constituants votre entier est %d\n",somme);
    printf("L'inverse de votre entier est %d \n",inverse);
    return 0;
}