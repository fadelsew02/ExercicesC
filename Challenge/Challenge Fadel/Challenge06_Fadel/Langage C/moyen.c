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

	int choix = 0;

	Ami Mon_Ami = {"SEWADE", "Fadel", 20, 1.68};
	printf("Les informations par defaut\n");
	printf("Nom: %s\n",Mon_Ami.nom);
	printf("Preom: %s\n",Mon_Ami.prenom);
	printf("Age: %d\n",Mon_Ami.age);
	printf("Taille: %3lf\n",Mon_Ami.taille);
	while(choix != 5){
		printf("Désirez-vous modifier des données ?\n");
		printf("\t\t1: nom\n");
		printf("\t\t2: prenom\n");
		printf("\t\t3: age\n");
		printf("\t\t4: taille\n");
		printf("\t\t5: Ne rien modifier\n");
		scanf("%d",&choix);
		if (choix == 1){
			printf("Entrez le nouveau nom\n");
			scanf("%s",&Mon_Ami.nom);
			printf("Les informations modifiées\n");
			printf("Nom: %s\n",Mon_Ami.nom);
			printf("Nom: %s\n",Mon_Ami.prenom);
			printf("Nom: %d\n",Mon_Ami.age);
			printf("Nom: %lf\n",Mon_Ami.taille);
		}else if(choix == 2){
			printf("Entrez le nouveau prenom\n");
			scanf("%s",&Mon_Ami.prenom);
			printf("Les informations modifiées\n");
			printf("Nom: %s\n",Mon_Ami.nom);
			printf("Nom: %s\n",Mon_Ami.prenom);
			printf("Nom: %d\n",Mon_Ami.age);
			printf("Nom: %lf\n",Mon_Ami.taille);
		}else if(choix == 3){
			printf("Entrez le nouvel age\n");
			scanf("%d",&Mon_Ami.age);
			printf("Les informations modifiées\n");
			printf("Nom: %s\n",Mon_Ami.nom);
			printf("Nom: %s\n",Mon_Ami.prenom);
			printf("Nom: %d\n",Mon_Ami.age);
			printf("Nom: %lf\n",Mon_Ami.taille);
		}else if(choix == 4){
			printf("Entrez la nouvelle taille\n");
			scanf("%lf",&Mon_Ami.taille);
			printf("Les informations modifiées\n");
			printf("Nom: %s\n",Mon_Ami.nom);
			printf("Nom: %s\n",Mon_Ami.prenom);
			printf("Nom: %d\n",Mon_Ami.age);
			printf("Nom: %lf\n",Mon_Ami.taille);
		}else if(choix == 5){
			printf("Sayonara\n");
		}		
	}
	
	return EXIT_SUCCESS;
}