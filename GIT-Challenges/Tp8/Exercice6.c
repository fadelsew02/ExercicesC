#include<stdio.h>
#include<stdlib.h>

void affiche_ligne2(int n1, int n2, char car );

int main(void){
    int entier = 0, entier2 = 0;
    char caractere;

    printf("Entrez un entier positif et un caractere:\t");
    scanf("%d %d %c",&entier, &entier2, &caractere);

    affiche_ligne2(entier,entier2,caractere);

    system("pause");
    return EXIT_SUCCESS;
}

void affiche_ligne2(int n1, int n2, char car){
    for (int i = 0; i < n1; i++){
        printf(" ");
    }
    
    for(int i = 0; i < n2; i++){
        printf("%c ",car);
    }
    printf("\n");
}
