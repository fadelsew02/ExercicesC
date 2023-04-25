#include <stdio.h>
#include <stdlib.h>

void division_euclidienne(int a, int b);

int main(int argc, char **argv){

    int a=0, b=0;
    printf("Entrez les protagonistes de votre division: \n\t a: ");
    scanf("%d",&a);
    printf("\n\t b: ");
    scanf("%d",&b);
    division_euclidienne(a,b);
    system("pause");
    return 0;
}

void division_euclidienne(int a, int b){
    int r=a;
    int q=0;

    while(r >= b){
        q++;
        r=r-b;
    }

    printf("On a donc: \n\t\t %d = %d*%d + %d \n",a,b,q,r);
}
