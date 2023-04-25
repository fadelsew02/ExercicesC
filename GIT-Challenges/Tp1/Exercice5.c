#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[]){
    float myVariable = 1234.5678;

    printf("\t %c %d \n"
           "\t %c %f \n"
           "\t %c %e \n",175,myVariable,175,myVariable,175,myVariable);

    system("pause");
    return EXIT_SUCCESS;
}
