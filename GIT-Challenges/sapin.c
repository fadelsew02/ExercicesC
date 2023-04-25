#include<stdio.h>
#include<stdlib.h>

int main(){
    int taille=0;
    int base=0;
    int tab[30];

    for (int i = 0; i < 30; i++){
        tab[i]=0;
    }
    
    printf("Entrez la hauteur de votre sapin: ");
    scanf("%d",&taille);
    base = 8*(taille-1)+5;
    int corps = 4;
    int dev=0, k=0;
    int m=0;
    int l=1, p=2;

    for (int i = 1; i <= taille; i++){
        for(int j=l; j<=(corps+l-1); j++,m=0){
            for(int k=1; k<=base-j; k++){
                printf(" ");
            }
            while(m != 2*j-1){
                printf("*");
                m++;
            }
            printf("\n");
        }
        l = l+p;
        p++;
        k=3;
        corps++;
    }
    printf("                  ||||| \n");
    printf("                  ||||| \n");
    printf("                  ||||| \n");
    printf("                  ||||| \n");
    printf("                  ||||| \n");
    printf("                  ||||| \n");
    printf("                  ||||| \n");
    printf("                  ||||| \n");
    printf("                  ||||| \n");
 

    
    return 0;
}
