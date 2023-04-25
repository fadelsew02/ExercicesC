#include<stdio.h>
#include<stdlib.h>

void affiche_ligne(int n, char car);
void affiche_grandTriangle(int n, char car);

int main(void){
    int entier = 0;
    char caractere;

    printf("Entrez un entier positif et un caractere:\t");
    scanf("%d %c",&entier,&caractere);
    printf("\n");
    affiche_grandTriangle(entier,caractere);

    system("pause");
    return EXIT_SUCCESS;
}

void affiche_ligne(int n, char car){
            
        int i1 = 1;
        for(int i = 0; i < n; i++){
            printf("\t");
            for(int j = 0; j < i1; j++){
                printf("%c ",car);
            }
            printf("\n");
            i1++;
        }   
        i1 = n-1;
        for(int i = 0; i < n; i++){
            printf("\t");
            for(int j = 0; j < i1; j++){
                printf("%c ",car);
            }
            printf("\n");
            i1--;
        }             
}

void affiche_grandTriangle(int n, char car){
    affiche_ligne(n,car);
}
