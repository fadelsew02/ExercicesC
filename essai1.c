#include <stdio.h>
#include <stdlib.h>
#include<stddef.h>

// #define BONJOUR puts("Bonjour")


int main(int argc, char const *argv[])
{
       // BONJOUR;

	 // printf("\n %zu octets pour variable de type char",sizeof(char));
	// printf("\n %d octets pour variable de type unsigned char",sizeof(unsigned char));
	// printf("\n %d octets pour variable de type short_int",sizeof(short int));
	// printf("\n %d octets pour variable de type int",sizeof(int));
	// printf("\n %d octets pour variable de type long int",sizeof(long int));
	// printf("\n %d octets pour variable de type float",sizeof(float));
	// printf("\n %d octets pour variable de type double",sizeof(double));
 //    printf("\n %d octets pour variable de type long long",sizeof(long long));
 //    printf("\n %d octets pour variable de type long",sizeof(long));
 //    printf("\n %d octets pour variable de type long double",sizeof(long double));
    // system (" color 6F");
    // printf("%d\n",nfois );
    char *s;//Une variable de type pointeur sur caractères
    int *t; //Une variable de type pointeur sur entier
    float *td;//Une variable de type pointeur sur flottant
    int i;
    s = (char *) malloc(10*sizeof(char));
    t = (int *) malloc(12*sizeof(int));
    td = (float *) malloc(51*sizeof(float));
    scanf("%s",s);
    for (int i = 0; i < 10; ++i)
    {
    	scanf("%d",&(t[i]));
    	printf("%d",t[i]);
    }
    for (int i = 0; i < 10; ++i)
    {
    	scanf("%f",&(td[i]));
    	printf("%f\n",t[i]);
    }

	return 0;
}