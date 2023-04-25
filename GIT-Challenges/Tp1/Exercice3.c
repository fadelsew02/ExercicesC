#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char** argv) {
    double x1=1.2345, x2=123.45;
    double x3=0.000012345, x4=1e-10, x5=-123.4568e15;

    printf("\t %c x1=%f, x2=%f, x3=%f, x4=%f, x5=%f \n\n",175,x1,x2,x3,x4,x5);
    printf("\t %c x1=%e, x2=%e, x3=%e, x4=%e, x5=%e \n\n",175,x1,x2,x3,x4,x5);
    
    system("pause");
    return EXIT_SUCCESS;
}