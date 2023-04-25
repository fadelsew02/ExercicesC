#include<stdio.h>
#include<stdlib.h>

void affiche_ligne(int n, char car );
void affiche_carre(int cote, char car);

int main(void){
    int entier = 0;
    char caractere;

    printf("Entrez un entier positif et un caractere:\t");
    scanf("%d %c",&entier,&caractere);

    affiche_carre(entier, caractere);

    system("pause");
    return EXIT_SUCCESS;
}

void affiche_ligne(int n, char car){
    for(int i = 0; i < n; i++){
        printf("%c ",car);
    }
    printf("\n");
}

void affiche_carre(int cote, char car){
    for (int i = 0; i < cote; i++){
        affiche_ligne(cote,car);
    }  
}