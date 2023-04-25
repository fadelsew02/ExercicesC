#include<stdio.h>
#include <stdlib.h>
#include<time.h>

int	main(int argc, char **argv){
    unsigned int n = 0;
    
    printf("Entrez un entier positif:\t");
    scanf("%u",&n);

    unsigned int m[n][n];
    unsigned int m2[n][n];
    unsigned int res[n][n];

  /*  
        Premiere méthode
   printf("Entrez tt les elements de votre matrice:\n");
    for (int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("\t\tElement [%d,%d]: ",i,j);
            scanf("%d",&m[i][j]);
            printf("\n");
        }
    } */

    printf("\n\nLes elements de la matrice m sont:\n");
    srand(time(NULL));
    for (int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("\t\tElement [%d,%d]: ",i,j);
            m[i][j] = 1 + rand()%100;
            printf("%d",m[i][j]);
            printf("\n");
        }
    }

    printf("\n\nLes elements de la matrice m2 sont:\n");
    srand(time(NULL));
    for (int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("\t\tElement [%d,%d]: ",i,j);
            m2[i][j] = 1 + rand()%100;
            printf("%d",m2[i][j]);
            printf("\n");
        }
    }
    printf("\n\n");

    printf("\t\t Affichage de la matrice m:\n");
    for (int i = 0; i < n; i++){
        printf("\t\t");
        for(int j = 0; j < n; j++){
            printf(" %5d ",m[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");

    printf("\t\t Affichage de la matrice m2: \n");
    for (int i = 0; i < n; i++){
        printf("\t\t");
        for(int j = 0; j < n; j++){
            printf(" %5d ",m2[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");

    for (int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            res[i][j] = m[i][j] + m2[i][j];
        }
    }

    printf("\t\t Affichage de la matrice resultat: \n");
    for (int i = 0; i < n; i++){
        printf("\t\t");
        for(int j = 0; j < n; j++){
            printf(" %5d ",res[i][j]);
        }
        printf("\n");
    }

    system("pause");
    return EXIT_SUCCESS;
}
