#include<stdio.h>
#include<stdlib.h>
#include <math.h>

int	main(int argc, char **argv){
    unsigned int entier=0, i=1, d=2,c=0, e=0;
    double racine=0.0;

    printf("Entrez l'entier naturel a tester:\t");
    scanf("%d",&entier);
    
    racine = sqrt((double)entier);

    for(int d=2; d<=entier;d++){
        e=0;
        for(int i=1; i<sqrt((double)d); i++){
            c = d%i;
            if(c==0){
                e++;
            }
        }
        if(e==1){
            printf("%d est un nombre premier\n",d);
        }
    }
    system("pause");
    return 0;
}
