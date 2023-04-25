#include<stdio.h>
#include <stdlib.h>
#include <time.h>

int genere_entier(int lim);

int main(int argc, char **argv){
    int entier = 0;
    int nombreAleatoire = 0;

    printf("Entrez une valeur entiere positive grande: \n \t\t %c ",175);
    scanf("%d",&entier);
    if(entier < 0){
        entier = -1*entier;
    }

    nombreAleatoire = genere_entier(entier);
    printf("Le nombre aleatoire tire est %d \n",nombreAleatoire);
    system("pause");
    return EXIT_SUCCESS;
}

int genere_entier(int limite){
    srand(time(NULL));
    return (rand()%(limite+1));
}