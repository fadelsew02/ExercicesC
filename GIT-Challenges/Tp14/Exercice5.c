#include<stdio.h>
#include<stdlib.h>


int additionne_diviseurs_propres(int n);
int calcule_abondance(int n);

int	main(int argc, char **argv){
    int entier=0;

    printf("Entrez un nombre entier positif: ");
    scanf("%d",&entier);
    if(entier < 0){
        entier = -1*entier;
    }
    printf("L'abondance de %d est a(%d) = %d \n",entier,entier,calcule_abondance(entier));
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

int calcule_abondance(int n){
    int res=0;
    res=additionne_diviseurs_propres(n);
    // a(n) = s(n)-n avec s(n) la somme des diviseurs de n
    return res-n;
}