#include<stdio.h>
#include<stdlib.h>

int	main(int argc, char **argv){
    
    int caractere;

    printf("Entrez le code ASCII :\t");
    scanf("%d",&caractere);
    printf("Le caract%cre correspondant au code ASCII %d est:\t'%c'\n",138,caractere,caractere);

    system("pause");
    return EXIT_SUCCESS;
}
