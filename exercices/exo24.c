#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main(void)
{
	int i = 0, k = 0, j = 0, l = 0;
	char chaine[256];
	char sous_chaine[256];
	
    int pos[10]= {0};


	printf("Entrer une chaine de caracteres\n\n");
	fgets(chaine,256,stdin);
	printf("Entrer la sous chaine recherchée\n\n");
	fgets(sous_chaine,256,stdin);
	k=strlen(chaine);
	l=strlen(sous_chaine);
	while(i<=k)
	{
		if(chaine[i] == sous_chaine[j])
		{
			pos[k] = i+1;
			k++;
		}
		while(chaine[i] == sous_chaine[j])
		{
			i++;
			j++;
		}
		if(j<l)
		{
			k--;
		}
		j=0;
		i++;
	}
	printf("Le nombre de fois que la sous chaine est: %d \n",k);
	if( k!=0)
	{
		printf("Les positions sont: ");
		for(i=0; i<k; i++)
		{
			printf("%d",pos[i]); 
		}
	}
	









}