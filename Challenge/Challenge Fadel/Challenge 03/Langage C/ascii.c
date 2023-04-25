#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	char carac = 0;

	printf("Entrez le caract%cre dont vous voulez le code ascii :\t",138);
	scanf("%c",&carac);
	printf(" Caract%cre: %c    Code = %d",138,carac,carac);
	return EXIT_SUCCESS;
}