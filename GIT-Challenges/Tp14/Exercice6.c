#include<stdio.h>
#include<stdlib.h>


int additionne_diviseurs_propres(int n);
int est_parfait(int n);

int	main(int argc, char **argv){
    int entier=0;

    printf("Entrez un nombre entier positif: ");
    scanf("%d",&entier);
    if(entier < 0){
        entier = -1*entier;
    }
    int r = est_parfait(entier);
    if(r == 1){
        printf("%d est un nombre parfait\n",entier);
    }else{
        printf("%d n'est pas parfait\n",entier);
    }
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

int est_parfait(int n){
    int res=0;
    res=additionne_diviseurs_propres(n);
    if(res-n == 0){
        return 1;
    }else{
        return 0;
    }
}