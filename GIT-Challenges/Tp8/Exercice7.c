#include<stdio.h>
#include<stdlib.h>

void affiche_ligne2(int cote, char car );
void affiche_croix(int cote, char car);

int main(void){
    int entier = 0, entier2 = 0;
    char caractere;

    printf("Entrez un entier positif et un caractere:\t");
    scanf("%d %c",&entier, &caractere);

    // affiche_ligne2(entier,entier2,caractere);
    affiche_croix(entier, caractere);

    system("pause");
    return EXIT_SUCCESS;
}

void affiche_ligne2(int cote, char car){
    for(int j = 1; j < cote*2; j++){
        if( j == cote){
            for (int i = 0; i < (cote-1); i++){
                printf("%c ",car);
            }
        }else{
            for (int i = 0; i < (cote-1)*2; i++){
                printf(" ");
            }
        }
        printf("%c ",car);
        if(j == cote){
            for (int i = 0; i < (cote-1); i++){
                printf("%c ",car);
            }
        }else{
            for (int i = 0; i < (cote-1)*2; i++){
                printf(" ");
            }
        }
        printf("\n");
    }
   
    
    // for(int i = 0; i < n2; i++){
    //     printf("%c ",car);
    // }
    printf("\n"); 
}


void affiche_croix(int cote, char car){
    affiche_ligne2(cote, car);
}