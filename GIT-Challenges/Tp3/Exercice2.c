#include<stdio.h>
#include<stdlib.h>

short a=0, b=0, c=0;
void function(){
    short g=0, h=0, i=0;
    printf("&g: %p \t &h: %p \t &i: %p \n",&g,&h,&i);
}

int main(int argc, char const *argv[]){
    short d=0, e=0, f=0;
    printf("&a: %p \t &b: %p \t &c: %p \n"
            "&d %p \t &e: %p \t &f: %p \n",&a,&b,&c,&d,&e,&f);

    function();

    system("pause");
    return EXIT_SUCCESS;

    /* 
        Adresses affichées: 
            g: 000000000061FDBE; h: 000000000061FDBC ; i:000000000061FDBA ;
            Observations:
                Ici également, l'ordinateur a choisi des cases successives pour stocker nos trois variables
                mais dans une autre zone de la mémoire.
     */
}
