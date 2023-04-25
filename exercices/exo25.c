#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(void)
{
	int entier = 0;
	int l = 0, i = 0, taille = 0, reste = 0, b = 0;
    int *tab = NULL;

	printf("Entrer votre entier\n\n");
	scanf("%d",&entier);
	l=log10(entier);
	taille = l + 1;
	tab = malloc(taille * sizeof(int));
	if(tab == NULL)
	{
		printf("Allocation echouee\n\n");
		exit(1);
	}
	for( i = 0; i < taille; i++)
	{
		reste = entier % 10;
		tab[i] = reste;
	    entier = entier / 10;
		
	}
	for(i = 0; i < taille/2; i++)
	{
		if(tab[i] == tab[taille-i-1])
			b++;
	}
	printf("\n\n");
	if((b == taille/2) || (b == taille-1))
	{
		printf("Le nombre est palindrome\n\n");
	}
	else
	{
		printf("Le nombre n'est pas palindrome\n\n");
	}

	free(tab);

	return 0;

}
