#include<stdio.h>
#include<stdlib.h>

void test1(int x);

int main(int argc, char **argv){
    int n = 13;
    printf("@main: l'adresse de n avant l'appel est: %p \n"
           "@main: la valeur de n avant l'appel est: %d \n",&n,n);
    test1(n);
    printf("@main: l'adresse de n apres l'appel est: %p \n"
           "@main: la valeur de n apres l'appel est: %d \n",&n,n);
    system("pause");
    return EXIT_SUCCESS;
}

/* 
  C'est la meme que dans l'exercice précédent   
 */

void test1(int x){
     printf("@test1: l'adresse de x est: %p \n"
           "@test1: la valeur de x est: %d \n",&x,x);
}