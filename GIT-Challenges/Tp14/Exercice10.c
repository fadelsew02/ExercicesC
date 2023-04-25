#include<stdio.h>
#include <stdlib.h>

int additionne_diviseurs_propres(int n);
void affiche_nombres(int max, int mode);
int additionne_diviseurs_propres(int n);
int est_abondant(int n);
int est_parfait(int n);
int est_deficient(int n);


int	main(int argc, char **argv){
    
    int max=0, mode=0;

    printf("Donnez un entier maximal:");
    scanf("%d",&max);
    printf("Entrez le mode voulue:\n\n"
            "\t\t %c-1 pour afficher les entiers deficients \n"
            "\t\t %c 0 pour afficher les entiers parfaits \n"
            "\t\t %c 1 pour afficher les entiers abondants \n\t",175,175,175);
    scanf("%d",&mode);

    affiche_nombres(max,mode);   
    system("pause");
    return 0;
}

void affiche_nombres(int max, int mode){
    int abondant=0;
    int deficient=0;
    int parfait=0;
    int a=1;

    if(mode == -1){
        for(int i=2; i<max; i++){
            deficient = est_deficient(i);
            if(deficient == 1){
                printf("%2d.",a);
                printf(" %d\n",i);
                a++;
            }
        }
    }else if(mode == 0){
        for(int i=2; i<max; i++){
            parfait = est_parfait(i);
            if(parfait == 1){
                printf("%2d. ",a);
                printf(" %d\n",i);
                a++;
            }
        }
    }else{
        for(int i=2; i<max; i++){
            abondant = est_abondant(i);
            if(abondant == 1){
                printf("%2d. ",a);
                printf(" %d\n",i);
                a++;
            }
        }
    }
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
    if((res-n) > 0){
        return 1;
    }else if((res-n) < 0){
        return 0;
    }
}

int est_deficient(int n){
    int res=0;
    res=additionne_diviseurs_propres(n);
    if((res-n) > 0){
        return 0;
    }else if((res-n) < 0){
        return 1;
    }
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