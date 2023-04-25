#include<stdio.h>
#include<stdlib.h>
#include <math.h>

int	main(int argc, char **argv){
    unsigned int entier=0, d=0,c=0, e=0;
    float entier2=0.0;
    double racine=0.0;
    int premier=0;

    printf("Entrez l'entier naturel a tester:\t");
    scanf("%d",&entier);

    racine = sqrt((double)entier);;
    for(int i=1; i < racine; i++){
        c = entier%i;
        if(c == 0){
            d = d+1;
        }
    }

    if(d==1){
        printf("%d est un nombre premier\n",entier);
    }else{
        premier = 1;
        printf("%d n'est pas un nombre premier: il est divisible par ",entier);
    }

    int i;

    if(d>1){
        for(i=2; i<racine; i++){
            c = entier%i;
            if(c == 0){
                e = e+1;
            }
            if(e==1){
                break;
            }
        }
    }
    if(premier ==1){
        printf("%d \n\n",i);
    }

    system("pause");
    return 0;
}
