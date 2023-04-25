#include <stdio.h>
#include <stdlib.h>

#include "binaire.h"

int main(int argc, char **argv){
    int n=0;
    int r=0,q=0;
    printf("Entrez un nombre entier: ");
    scanf("%d",&n);

    divise_binaire(n,&q,&r);
    printf(" On a alors: %d = %d*2 + %d \n" ,n,q,r);                                                         system("pause");
    
    return EXIT_SUCCESS;
}