#include <stdio.h>
#include<stdlib.h>

void division_euclidienne(int a, int b, int *r, int *q);
void pgcd(int a, int b, int *d, int *u, int *v);

int main(int argc, char **argv){
    int a=0, b=0, u=1, v=0, d=0;
    printf("Entrez les differents elements de votre equation: \n\t\t a: ");
    scanf("%d",&a);
    printf("\n\t\t b: ");
    scanf("%d",&b);
    d=a;
    pgcd(a,b,&d,&u,&v);

    printf("Alors d = %d",d);
    printf("\n");

    system("pause");
    return EXIT_SUCCESS;
}

void pgcd(int a, int b, int *d, int *u, int *v){
    int dprime=b, uprime=0, vprime=1;
    int r=0, q=0;

    while(dprime != 0){
        division_euclidienne(*d, dprime, &r, &q);
        *d = dprime;
        
        dprime=r;
        uprime= *u - q*uprime;
        vprime = *v - q*vprime;
        *u = uprime;
        *v = vprime;

        printf("u=%d et v=%d et dprime=%d \n",*u,*v,dprime);
    }
    
}

void division_euclidienne(int a, int b, int *r, int *q){
    *r=a;
    *q=0;
    while(*r >= b){
        (*q)++;
        *r=*r-b;
    }

    // printf("On a donc: \n\t\t %d = %d*%d + %d \n",a,b,q,r);
}