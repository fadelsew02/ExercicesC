#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int i=34, *pointeuri=&i;
	printf("l'addresse est %p\n",&i);
	printf("la valeur de la variable pointée est %d \n",*pointeuri);
	return 0;
}