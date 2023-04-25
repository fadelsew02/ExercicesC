 #include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[]){
        
    printf("Constante 1: %.10f \n"
           "Constante 2: %.10f \n",((1e-9+1e9)-1e9),(1e-9+(1e9-1e9)));
    
    system("pause");
    return EXIT_SUCCESS;
}
