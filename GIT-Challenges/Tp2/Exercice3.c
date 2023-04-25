#include<stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]){
    int x1 = 12, x2 = 4294967284;

    printf("\t %c Entier Naturel Hexad%ccimal: x1 = %x, x2 = %x \n"
           "\t %c Entiers non sign%cs: x1 = %u, x2 = %u \n"
           "\t %c Entiers sign%cs: x1 = %d, x2 = %d \n",175,130,x1,x2,175,130,x1,x2,175,130,x1,x2);
   
    system("pause");
    return EXIT_SUCCESS;

    /* 
        12 = 1100;
        4294967284 = 11111111111111111111111111110100.

        2^32 = 4294967284 + 12.
     */
}
