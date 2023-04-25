#include<stdio.h>
#include<stdlib.h>

int additionne_diviseurs_propres(int n);
int sont_amicaux(int n, int p);

int	main(int argc, char **argv){
    int n1=0,n2=0;

    printf("Entrez le premier nombre entier positif: ");
    scanf("%d",&n1);
    if(n1 < 0){
        n1 = -1*n1;
    }
    printf("Entrez le premier nombre entier positif: ");
    scanf("%d",&n2);
    if(n2 < 0){
        n2 = -1*n2;
    }
    
    int r = sont_amicaux(n1,n2);
    if(r == 1){
        printf("%d et %d sont des nombres amicaux\n",n1,n2);
    }else{
        printf("%d et %d ne sont pas des nombres amicaux \n",n1,n2);
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

int sont_amicaux(int n, int p){
    int res1=0;
    int res2=0;
    res1=additionne_diviseurs_propres(n);
    res2=additionne_diviseurs_propres(p);
    if((res1 == p) && (res2 == n)){
        return 1;
    }else{
        return 0;
    }
}