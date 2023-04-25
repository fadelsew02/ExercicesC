#include <stdio.h>
#include <stdlib.h>

#include "binaire.h"

int main(int argc, char **argv){

    int nombre[N]={0,1,5,1,1,1,1,0,1};

if(est_binaire(nombre,N) == 1){
    printf("C'est un nombre binaire\n");
}else{
    printf("Ce n'est pas un nombre  binaire\n");
}
    system("pause");
    return 0;
}

