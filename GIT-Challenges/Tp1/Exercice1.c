#include<stdio.h>
#include <stdlib.h>

int main(int argc, char **argv){
    char carac;

    printf("Entrez un caract%cre:\t",138);
    carac = getchar();
    putchar(carac);
    printf("\n");
    system("pause");
    return EXIT_SUCCESS;
}
