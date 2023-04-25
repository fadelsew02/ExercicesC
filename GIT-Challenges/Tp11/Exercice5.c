#include<stdio.h>
#include<stdlib.h>

void test4(int x, int *resultat);

int main(int argc, char **argv){
    int n = 13;
    int result = 9;
    printf("@main: l'adresse de n avant l'appel est: %p \n"
           "@main: la valeur de n avant l'appel est: %d \n"
           "@main: l'adresse de result avant l'appel est: %p \n"
           "@main: la valeur de result avant l'appel est: %d \n",&n,n,&result,result);

    test4(n, &result);
    
    printf("@main: l'adresse de n apres l'appel est: %p \n"
           "@main: la valeur de n apres l'appel est: %d \n"
           "@main: l'adresse de result apres l'appel est: %p \n"
           "@main: la valeur de result apres l'appel est: %d \n",&n,n,&result,result);

    system("pause");
    return EXIT_SUCCESS;
}

/* 
    Il est inutil car on a transmis a test4 l'adresse de resultat
    L'adresse de r est la meme dans les é fonctions. Car c'est l'adresse qu'il occupait dans le main qui a été transmis    
 */

void test4(int x, int *resultat){
    printf( "@test4: la valeur de x est: %d \n"
            "@test4: l'adresse de x est: %p \n"
            "@test4: l'adresse indiquee par le parametre resultat est: %p \n"
            "@test4: la valeur situee a cette adresse est: %d \n",x,&x,resultat,*resultat);   
    x=x/2;  
    printf( "@test4: la valeur  de x apres la division est: %d \n"
            "@test4: l'adresse de x apres la division est: %p \n"
            "@test4: l'adresse indiquee par resultat apres la division est: %p \n"
            "@test4: la valeur situee a cette adresse apres la division est: %d \n",x,&x,resultat,*resultat);
}