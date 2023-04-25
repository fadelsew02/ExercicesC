#include<stdio.h>
#include<stdlib.h>

void test1(int x);

int main(int argc, char **argv){
    int x = 13;
    printf("@main: l'adresse de x avant l'appel est: %p \n"
           "@main: la valeur de x avant l'appel est: %d \n",&x,x);
    test1(x);
    printf("@main: l'adresse de x apres l'appel est: %p \n"
           "@main: la valeur de x apres l'appel est: %d \n",&x,x);
    system("pause");
    return EXIT_SUCCESS;
}

/* 
    Les adresses de la variable diffèrent selon la fonction
    Selon moi, les adresses diffèrent parce que la variable est appelée 
    de différentes fonctions   
 */

void test1(int x){
     printf("@test1: l'adresse de x est: %p \n"
           "@test1: la valeur de x est: %d \n",&x,x);
}