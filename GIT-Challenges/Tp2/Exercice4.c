#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv){
    int var = 4;
    int var1 = -4;
    printf("\t %c Decimal: %d \n"
           "\t %c Octal: %o \n"
           "\t %c Hexadecimal: %x \n",175,var,175,var,175,var);
    printf("\n\n");
    printf("\t %c Decimal: %d \n"
           "\t %c Octal: %o \n"
           "\t %c Hexadecimal: %x \n",175,var1,175,var1,175,var1);
    system("pause");
    /* 
        Les deux conversions sont différentes.
        Cela est dû au fait var1 soit non-signé
        Et var2 soit signé   
     */
    return EXIT_SUCCESS;
}
