#include<stdio.h>
#include<stdlib.h>

int	main(int argc, char **argv){
    unsigned int entier = 0;
    
    printf("Entrez un entier positif:\t");
    scanf("%u",&entier);

    unsigned int m[entier][entier];
    printf("Entrez tt les elements de votre matrice:");
    for (int i = 0; i < entier; i++){
        for(int j = 0; j < entier; j++){
            scanf("%d",&m[i][j]);
        }
    }

    system("cls");
    printf("\t\tAffichage de la matrice:\n");

    for (int i = 0; i < entier; i++){
        for(int j = 0; j < entier; j++){
            printf(" %éd ",m[i][j]);
        }
        printf("\n");
    }
     
    system("pause");
    return EXIT_SUCCESS;
}
