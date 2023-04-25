#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	typedef struct Ami
	{
		char nom[256];
		char prenom[256];
		int age;
		double taille;
	}Ami;
	int nbreAmis = 0;

	printf("Combien d'amis as-tu ?\n");
	scanf("%d", &nbreAmis);

	Ami tab[nbreAmis];
	for (int i = 0; i < nbreAmis; ++i)
	{
		printf("\t\tAmi number %d\n",i+1);
		printf("\t\t\tNom: \t");
		scanf("%s",&tab[i].nom);
		printf("\n");
		printf("\t\t\tPrenom:\t");
		scanf("%s",&tab[i].prenom);
		printf("\n");
		printf("\t\t\tSon age: \t");
		scanf("%d",&tab[i].age);
		printf("\n");
		printf("\t\t\tSa taille:\t");
		scanf("%f",&tab[i].taille);
	}

	for (int i = 0; i < nbreAmis; ++i)
	{
		printf("Ami %d :\t",i+1);
		printf("%s",tab[i].nom);
		printf("\t");
		printf("%s",tab[i].prenom);
		printf(",\t");
		printf("%d ans",tab[i].age);
		printf(",\t");
		printf("%lf cm\n",tab[i].taille);
	}
	return EXIT_SUCCESS;
}