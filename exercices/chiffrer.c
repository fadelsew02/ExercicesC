#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
	/*
        Ce programme chiffre un texte entré par l'utilisateur par le chiffrement de Vigenere
        Pour cela :
	*/
    /*------------------------Déclaration et Initialisation des variables-------------------------*/
	char texte[256];
	char cle[5] = "PAIN";
	int c = 65; 
	int tab1[26];
	char tab2[26];
	int ascii[26];
	int i = 0, j = 0, y = 0, k = 0, l = 0, s1 = 0, s2 = 0, pos = 0;
	int asc1 = 0, asc2 = 0;
	char car[256] = " ";

	/*--------------------------- Initialisation des trois tableaux ------------------------------*/
	 for (int i = 0; i < 26; ++i)
	 {
	 	tab1[i] = i;
	 	tab2[i] = c + i;
	 	ascii[i] = c + i;
	 }
    /*----------------------------------------------------*/
	printf("Entrez un texte: \n");
	scanf("%s",&texte);
    /*----------------------------------------------------*/
	while(i < strlen(texte))
	{
		asc1 = texte[i];
		for (j = 0; j < 26; j++)
		{
			if (asc1 == ascii[j])
			{
				y = j;
				break;
			}
		}
		s1 = tab1[y];
		asc2 = cle[k];
		y = 0;
		for (int j1 = 0; j1 < 26; j1++)
		{
			if (asc2 == ascii[j1])
			{
				y = j1;
				break;
			}
		}
		s2 = tab1[y];
		pos = ((s1 + s2)%26);
		y = 0;
		for (int l = 0; l < 26; l++)
		{
			if (pos == tab1[l])
			{
				y = l;
				break;
			}
		}
		printf("%c",tab2[y]);
		i++;
		k++;
		if (k >= strlen(cle))
		{
			k = 0;
		}
	}
	return 0;
}