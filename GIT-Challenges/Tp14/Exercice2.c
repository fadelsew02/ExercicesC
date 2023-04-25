#include<stdio.h>
#include<stdlib.h>

#define N

void calcule_diviseurs(int n, int diviseurs[], int *d);
int additionne_diviseurs_propres(int n);

int	main(int argc, char **argv){
    int entier=0;
    int d=0;

    printf("Entrez un nombre entier positif: ");
    scanf("%d",&entier);
    if(entier < 0){
        entier = -1*entier;
    }
     int divis[entier] ;

    calcule_diviseurs(entier,divis,&d);
    int result=0;
    
    result = additionne_diviseurs_propres(entier);
    printf("s(%d) = %d \n\n",entier,result);
    system("pause");
    return 0;
}


void calcule_diviseurs(int n, int diviseurs[], int *d){
    int a=0;
    for(int i=1; i<=n; i++){
        if(n%i == 0){
            (*d)++;
            diviseurs[a] = i;
            a++;
        }
    }

    int i=0;
    printf("{");
    do{
        printf(" %d ",diviseurs[i]);
        i++;
    }while(i < *d);
    printf("} \n Et d = %d \n",*d);
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