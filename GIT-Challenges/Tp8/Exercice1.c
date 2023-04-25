#include<stdio.h>
#include<stdlib.h>

void affiche_ligne(int n, char car );

int main(void){
    int entier = 0;
    char caractere;

    printf("Entrez un entier positif et un caractere:\t");
    scanf("%d %c",&entier,&caractere);

    affiche_ligne(entier,caractere);

    system("pause");
    return EXIT_SUCCESS;
}

void affiche_ligne(int n, char car){
    for(int i = 0; i < n; i++){
        printf("%c ",car);
    }
    printf("\n");
}
