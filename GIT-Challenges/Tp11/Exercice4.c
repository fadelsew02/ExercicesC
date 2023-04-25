#include<stdio.h>
#include<stdlib.h>

int test3(int x);

int main(int argc, char **argv){
    int n = 13;
    printf("@main: l'adresse de n avant l'appel est: %p \n"
           "@main: la valeur de n avant l'appel est: %d \n",&n,n);
    n = test3(n);
    printf("@main: l'adresse de n apres l'appel est: %p \n"
           "@main: la valeur de n apres l'appel est: %d \n",&n,n);
    system("pause");
    return EXIT_SUCCESS;
}

/* 
  C'est la meme que dans l'exercice précédent   
 */

int test3(int x){
     printf("@test3: l'adresse de x est: %p \n"
            "@test3: la valeur de x est: %d \n"
            "@test3: la valeur de x/2 est: %d \n",&x,x,x/2);
    return x/2;
}