#include<stdio.h>
#include<stdlib.h>

void affiche_ligne(int n, char car, int sens);
void affiche_triangle2(int n, char car, int sens );

int main(void){
    int orienter = 0;
    int entier = 0;
    char caractere;

    printf("Entrez un entier positif et un caractere:\t");
    scanf("%d %c",&entier,&caractere);
    printf("Entrez 0 si vous voulez le triangle oriente vers le haut et 1 pour orienter vers le bas:\t");
    scanf("%d",&orienter);
    printf("\n");
    affiche_triangle2(entier,caractere,orienter);

    system("pause");
    return EXIT_SUCCESS;
}

void affiche_ligne(int n, char car, int direction){
        if(direction == 1){
            int i1 = n;
            for(int i = 0; i < n; i++){
                for(int j = 0; j < i1; j++){
                    printf("%c ",car);
                }
                printf("\n");
                i1--;
            }
        }else if (direction == 0){
            int i1 = 1;
            for(int i = 0; i < n; i++){
                for(int j = 0; j < i1; j++){
                    printf("%c ",car);
                }
                printf("\n");
                i1++;
            }    
        }
}

void affiche_triangle2(int n, char car, int direction){
    affiche_ligne(n,car,direction);
}
