#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]){
    int operande1=0, operande2=0;

    printf("Entrez le premier operande:\t ");
    scanf("%d",&operande1);
    printf("Entrez le second operande:\t ");
    scanf("%d",&operande2);

    printf("%d/%d = %f \n",operande1,operande2,(float)operande1/(float)operande2);
    system("pause");
    return 0;
}