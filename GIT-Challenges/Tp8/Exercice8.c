#include<stdio.h>
#include<stdlib.h>

void affiche_ligne2(int cote, int largeur, char car );
void affiche_croix(int cote, int largeur, char car);

int main(void){
    int entier = 0, largeur = 0;
    char caractere;
    printf("Entrez un entier positif, la largeur et un caractere:\t");
    scanf("%d %d %c",&entier, &largeur, &caractere);
    affiche_croix(entier, largeur, caractere);
    system("pause");
    return EXIT_SUCCESS;
}
void affiche_ligne2(int cote, int largeur, char car){
    int rep = cote-1-largeur/2;   
    for(int k=0;k<rep;k++){
        for(int j = 0; j < rep; j++){
            printf(" ");
        }
        for (int i = 0; i < largeur; i++){
            printf("%c ",car);
        }
        printf("\n");
    } 
    for (int k = 0; k < largeur; k++){
        for (int i = 0; i < (cote-1)*2+1 ; i++){
            printf("%c ",car);
        }
        printf("\n");
    }
    for(int k=0;k<rep;k++){
        for(int j = 0; j < rep; j++){
            printf(" ");
        }
        for (int i = 0; i < largeur; i++){
            printf("%c ",car);
        }
        printf("\n");
    }
}
void affiche_croix(int cote, int largeur, char car){
    affiche_ligne2(cote, largeur, car);
}