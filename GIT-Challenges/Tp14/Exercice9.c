#include<stdio.h>
#include<stdlib.h>


int additionne_diviseurs_propres(int n);
int est_abondant(int n);
int est_deficient(int n);

int	main(int argc, char **argv){
    int entier=0;

    printf("Entrez un nombre entier positif: ");
    scanf("%d",&entier);
    if(entier < 0){
        entier = -1*entier;
    }
    int abondant=0;
    int deficient=0;
    abondant = est_abondant(entier);
    if(abondant == 1){
        printf("Ce nombre est abondant\n");
    }
    deficient = est_deficient(entier);
    if(deficient == 1){
        printf("Ce nombre est deficient\n");
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


int est_abondant(int n){
    int res=0;
    res=additionne_diviseurs_propres(n);
    if((res-n) < 0){
        return 0;
    }else if((res-n) > 0){
        return 1;
    }
}

int est_deficient(int n){
    int res=0;
    res=additionne_diviseurs_propres(n);
    if((res-n) < 0){
        return 1;
    }else if((res-n) > 0){
        return 0;
    }
}