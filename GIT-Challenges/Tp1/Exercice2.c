#include <stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[]){
    char carac1;
    char carac2;

    printf("\t\t%c Entrez les deux caract%cres %c la suite sans espace ni retour a la ligne:\t",175,138,133);
    carac1 = getchar();
    carac2 = getchar();
    printf("\n");
 
    printf("\t\t\t\t %c",175);
    putchar(carac1);
    printf("\n");
    printf("\t\t\t\t %c",175);
    putchar(carac2);
    printf("\n");

    system("pause");
    return EXIT_SUCCESS;
}
