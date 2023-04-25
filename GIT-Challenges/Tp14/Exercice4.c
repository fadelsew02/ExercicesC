#include<stdio.h>
#include<stdlib.h>

#define N

void calcule_diviseurs(int n, int diviseurs[], int *d);
int additionne_diviseurs_propres(int n);
int additionne_diviseurs(int res, int n);
void affiche_sommes_diviseurs_propres(int max);

int	main(int argc, char **argv){
    int d=0; 
    int max=0;
    printf("Donnez une valeur a max:(max<=59) ");
    scanf("%d",&max);
    affiche_sommes_diviseurs_propres(max);
    printf("\n\n");
    system("pause");
    return 0;
}


int additionne_diviseurs_propres(int n){
    int s=0;
    for(int i=1; i<n; i++){
        if(n%i == 0){
            s=s+i;
        }
    }
    return s;
}

void affiche_sommes_diviseurs_propres(int max){
    printf(" n    :");
    for(int i=2; i<=max+1; i++){
        printf(" %02d ",i);
    }
    printf("\n s(n) :");
    for(int i=2; i<max+2; i++){
        printf(" %02d ",additionne_diviseurs_propres(i));
    }
}