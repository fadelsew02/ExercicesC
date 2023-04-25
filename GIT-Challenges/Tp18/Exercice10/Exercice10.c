#include <stdio.h>
#include <stdlib.h>

#include "binaire.h"

int main(int argc, char **argv){  
    float res=0;
    int it=0;
    int n=0;
    float x=0.0;

    printf("Entrez votre reel et votre puissance: \n Reel: x= ");
    scanf("%f",&x);
    printf( " A la puissance n: ");
    scanf("%d",&n);
    res = x;
    it = calcule_puissance2(x,n,&res); 

    printf("%f a la  puissance %d est egale a: %f en %d iterations \n",x,n,res,it);
    system("pause");
    return 0;
}                                     