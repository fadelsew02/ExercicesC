#include<stdio.h>
#include <stdlib.h>
#include<time.h>

int	main(int argc, char **argv){
    unsigned int n = 0;
    
    printf("Entrez un entier positif:\t");
    scanf("%u",&n);

    unsigned int m[n][n];
    unsigned int res[n][n];
    int s = 0;

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

    srand(time(NULL));
    for (int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("\t\tElement [%d,%d]: ",i,j);
            m[i][j] = 1 + rand()%100;
            printf("%d",m[i][j]);
            printf("\n");
        }
    }

    printf("Donnez un entier:\t");
    scanf("%d",&s);

    for (int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            res[i][j] = s*m[i][j];
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
