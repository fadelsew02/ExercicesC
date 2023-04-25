#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[]){

    int h = 0, m = 0, s = 0;

    printf("Entrez l'heure (hh:mm:ss) : \t");
    scanf("%d",&h);
    printf(":");
    scanf("%d",&m);
    printf(":");
    scanf("%d",&s);

    printf("%2d heure(s) \n"
           "%2d minute(s)\n"
           "%2d seconde(s)\n",h,m,s);
    
    system("pause");
    return EXIT_SUCCESS;
}
