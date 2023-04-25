#include <stdio.h>
#include <stdlib.h>

#include "binaire.h"

int main(int argc, char **argv){
    int nombre[9]={0,1,1,1,1,1,1,0,1};

    affiche_binaire(nombre,9);
    system("pause");
    return 0;
}
