#include <stdio.h>
#include <stdlib.h>

#include "Exercice2.h"

int	main(int argc, char **argv){ 
    int n=0;

    printf("Entrez la taille de votre permutation: ");
    scanf("%d",&n);

    johnson(n);
    
    system("pause");
    return 0;
}
