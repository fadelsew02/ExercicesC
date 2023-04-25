#include<stdio.h>
#include<string.h>

int main(void)
{
	char chaine[100];
	char ch[100];
	int j;
	printf("entrer la chaine à convertir en majuscule\n");
	scanf("%s",&chaine);
	strcpy(ch,chaine);
	for (j = 0; chaine[j]!='\0'; j++)
	{
		if(chaine[j] >= 'a' && chaine[j]<= 'z')
			chaine[j]=chaine[j] - 32;
	}
	printf("la conversion donne %s ==>%s\n",ch,chaine);
	return 0;
}