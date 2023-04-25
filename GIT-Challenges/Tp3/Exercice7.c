/* 
    1
    0
    0
    1
    1
    0
    vrai
    7
    7
    1
    1
    0
 */

#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[]){
    int x=5, y=15;
    float u=2.1, v=5.0;
    printf("x==x : %d\n",x==x);
    printf("x==y : %d\n",x==y);
    printf("x==u : %d\n",x==u);
    printf("x==v : %d\n",x==v);
    printf("x>4 || x<3 : %d\n",x>4 || x<3);
    printf("x>4 || x<3 : %d\n",x>4 && x<3);
    
    if(x){
        printf("(x) : vrai \n");
    }else{
        printf("(x) : faux\n");
    }

    printf("x=7 : %d\n",x=7);
    printf("x : %d\n",x);
    printf("x=(7 != 8) : %d\n",x=(7!=8));
    printf("x : %d\n",x);
    printf("(float)x: %d\n", (float)x);

    return EXIT_SUCCESS;

    // La valeur d'une expression d'affectation renvoie deux valeurs
    // soit 1 pour vrai et 0 pour faux
}
