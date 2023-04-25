#include<stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]){

    int entier = 0;

    printf("Entrez un entier:\t");
    scanf("%d",&entier);
    printf("\t%cLe triple de %d est:%d \n",175,entier,3*entier);

    system("pause");
    return EXIT_SUCCESS;
}
