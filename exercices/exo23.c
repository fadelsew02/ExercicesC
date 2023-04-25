#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
	char mot[256];
	int i=0, k = 0, b = 0;

	printf("Entrer le mot\n\n");
	gets(mot);
	k=strlen(mot);
	for(i=0; i<k/2; i++)
	{
		if(mot[i] == mot[k-i-1])
			b++;
	}
	if((b == k/2) || (b == k-1))
	{
		printf("Le mot es palindrome\n\n");
	}
	else
	{
		printf("Le mot n'est pas palindrome\n\n");
	}
	system("color F0");
	return 0;

}