#include<stdio.h>
#include<stdlib.h>

int additionne_diviseurs_propres(int n);
int est_sublime(int n);
int est_parfait(int n);

int	main(int argc, char **argv){
    int n1=0;

    printf("Entrez le nombre entier positif: ");
    scanf("%d",&n1);
    if(n1 < 0){
        n1 = -1*n1;
    }
    
    int r = est_sublime(n1);
    if(r == 1){
        printf("%d est un nombre sublime\n",n1);
    }else{
        printf("%d n'est pas un nombre sublime\n",n1);
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

int est_sublime(int n){
    int res=0;
    int parfait=0, parfait2=0;
    res=additionne_diviseurs_propres(n)+n;
    if(est_parfait(res) == 1){
        parfait = 1;
    }else{
        parfait = 0;
    }
    int a=0;
    for(int i=1; i<=n; i++){
        if(n%i == 0){
            a++;
        }
    }
    
    if(est_parfait(a) == 1){
        parfait2 = 1;
    }else{
        parfait2 == 0;
    }
    if(parfait == 1 && parfait2 == 1){
        return 1;
    }else{
        return 0;
    }

}

