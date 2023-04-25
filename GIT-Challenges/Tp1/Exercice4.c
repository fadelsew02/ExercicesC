#include <stdio.h>
#include<stdlib.h>

int	main(int argc, char **argv){
    float x1=12.34567, x2=1.234567, x3=1234567;
    float x4=123456.7, x5=0.1234567, x6=1234.567;

    printf("%10.2f \t\t %10.2f\n"
           "%10.2f \t\t %10.2f\n"
           "%10.2f \t\t %10.2f\n",x1,x2,x3,x4,x5,x6);
    system("pause");
    return EXIT_SUCCESS;
}
