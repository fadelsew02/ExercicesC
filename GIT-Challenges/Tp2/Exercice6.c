#include<stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]){
    /* 
        0.1 dans le langage binaire = 0.0001100110011001
        et autres    
     */
    // float var = 0.1;


    printf("\tUn seul chiffre apr%cs la virgule: %.1f \n"
           "\tDix chiffres apr%cs la virgule: %.10f \n",138,0.1,138,0.1);
    
    system("pause");
    return EXIT_SUCCESS;
}
