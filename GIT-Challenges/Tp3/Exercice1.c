#include<stdio.h>
#include<stdlib.h>

short a=0, b=0, c=0;
int	main(int argc, char **argv){
    short d=0, e=0, f=0;

    printf("&a: %p \t &b: %p \t &c: %p \n"
            "&d %p \t &e: %p \t &f: %p \n",&a,&b,&c,&d,&e,&f);

    system("pause");
    return EXIT_SUCCESS;

    /* 
        Observations:
            Les adresses des variables a,b et c se suivent à raison d'une case mémoire
            Les adresses des variables d,e et f se suivent elles aussi
     */
}
