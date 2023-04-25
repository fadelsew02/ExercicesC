#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

#define TRUE 1
#define FALSE 0

static char lirelettre(void);
static int recherchelettre(char car, char* mot);
static void affiche_tableau(void);
static int tableaucomplet(void);
static int etattableau(void);

char tableau[7];


static char lirelettre(void)
{
	char lettre = 0;
	printf("Proposez une lettre  ");
	lettre = getchar();
	lettre = toupper(lettre);
	while(getchar() != '\n');
	return lettre;
}


static int recherchelettre(char caractere, char mot[])
{
	int i;
	for(i = 0; i < 7; i++)
	{
		if(caractere == mot[i])
		{
			return TRUE;
		}
		else
		{
			return FALSE;
		}
	}
}

static int tableaucomplet(void)
{
	int cpt;
	for(cpt = 0; cpt < 7; cpt++)
	{
		if(tableau[cpt] == ' ')
		{
			return 0;
		}
	}
	return 1;
}


static int etattableau(void)
{
    if(tableaucomplet)
    {
    	return FALSE;
    }	
    else
    {
    	return TRUE;
    }
}


static void affiche_tableau(void)
{
	int j;
	for(j = 0; j < 7; j++)
	{
		if(isalpha(tableau[j]))
		{
		    printf("%c",tableau[j]); 	
		}
		else
		{
			printf("*");
		}
	}
}

int main(void)
{
	char caractere = 0;
	unsigned char nbrecoups = 10;
	int verifie ;
	char mot[8] = "BONJOUR";
	int i;
	int statut = FALSE;

    printf("Vous devrez deviner un mot à sept lettre en dix(10) coups\n");
    printf("Mot secret: *******\n");
	do
	{
		printf("\n\n");
		caractere = lirelettre();
		verifie = recherchelettre(caractere, mot);
		if(verifie == FALSE)
		{
            nbrecoups--;
            printf("Il te reste %u coups à jouer!!!  ",nbrecoups);
   	    }
   	    else if(verifie == TRUE)
   	    {
   	    	for(i = 0; i < 7; i++);
   	    	{
   	    		if(mot[i] == caractere)
   	    		{
   	    			tableau[i] = mot[i];
   	    		}
   	    	}
   	    }
      	printf("Quel est le mot secret ? ");
      	affiche_tableau();
      	statut = etattableau();

	}while(nbrecoups > 0 || statut == FALSE);

	if(nbrecoups == 0)
	{
		printf("Perdu!!! Vous avez épuisé vos essais\n\n");
	}
	else if(statut == TRUE)
	{
		printf("Vous avez trouvé le mot!! Bravo\n\n");
	}

	return 0;
}