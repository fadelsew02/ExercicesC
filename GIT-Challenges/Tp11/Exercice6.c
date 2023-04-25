#include<stdio.h>
#include<stdlib.h>

void test4(int *x);

int main(int argc, char **argv){
    int n = 13;
    printf("@main: l'adresse de n avant l'appel est: %p \n"
           "@main: la valeur de n avant l'appel est: %d \n",&n,n);
    test4(&n);
    printf("@main: l'adresse de n apres l'appel est: %p \n"
           "@main: la valeur de n apres l'appel est: %d \n",&n,n);

    system("pause");
    return EXIT_SUCCESS;
}

/* 
    Il est inutil car on a transmis a test4 l'adresse de resultat
    L'adresse de r est la meme dans les é fonctions. Car c'est l'adresse qu'il occupait dans le main qui a été transmis    
 */

void test4(int *x){
    printf( "@test5: la valeur de x est: %d \n"
            "@test5: l'adresse de x est: %p \n",*x,x);
    *x = (*x)/2;
    printf( "@test5: la valeur de x apres division est: %d \n"
            "@test5: l'adresse de x apres division est: %p \n",*x,x);


}