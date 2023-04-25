#include<stdio.h>
#include<stdlib.h>


int main(void)
{
    int *age = NULL; ;
    age = calloc(1, sizeof(int));//Allocation de la mémoire
    if(age == NULL)
    {
        printf("L'allocation a échouée\n");
        return EXIT_FAILURE;
    }
    // printf("\tQuel %cge avez vous ?\n\t",131);
    // scanf("%d",&age);
    printf("Vous avez %d ans\n",*age);
    free(age);//Libération de mémoire

    return 0;

}