#include<stdio.h>
#include <stdlib.h>

int main(int argc,char *argv[]){
    
    unsigned int entier=0, i=1,c=0, e=0, a=0;
    double racine=0.0;
    int n =1;
    

    printf("Entrez l'entier naturel a tester:\t");
    scanf("%d",&entier);

    int premier[entier];
    
    racine = sqrt((double)entier);

    for(int n=1; n<=entier;n++){
        e=0;
        for(int i=1; i<sqrt((double)n); i++){
            c = n%i;
            if(c==0){
                e++;
            }
        }
        if(e==1){
            premier[a] = n;
            a++;
        }
    }
    
    system("pause");
    return EXIT_SUCCESS;
}