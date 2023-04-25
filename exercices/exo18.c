#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
	char phrase[256];
	int nbredemots=1;
    char i;

	printf("Entrer une chaine de caractere\n\n");
	gets(phrase);
	for(i=0; phrase[i] != '\0'; i++)
		if(phrase[i]==' ' || phrase[i]=='\n' || phrase[i] == '\t')
		nbredemots++;
	printf("Le nombre de mots dans la phrase est: %d \n",nbredemots);
	return 0;

}