#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

/*----------------Programme du chiffrement de César----------------*/
/*Elle admet deux paramètres en entrée(la chaine à coder et un entier) et trouve l'équivalent de 
la chaine suivant la constante de codage entré par l'utilisateur */


/*Initialisation d'une procédure qui trouve l'équivalent d'un caractere à partir de l'algorithme*/

void cesar(char str[], int nombre)
{
	int i=0;
	char c;
	while(str[i] != '\0')
	{
		if(str[i] >= 'A' && str[i]<=                                                                                                                    'Z')
		{
			c=str[i] -'A';
			c+=nombre;
			str[i] = c + 'A';
		}
		i++;	
	}
	printf("%s\n",str );
}


/*----------------Début du programme principal----------------*/

int main(void)
{
	char str[256];
	int j;
	int taillestr;
	printf("Entrer une chaine de caractere\n");
	scanf("%s",str);
	taillestr= strlen(str);
	for(j=0; j<taillestr; j++)
	{
		str[j]= toupper(str[j]);
	}
	cesar(str, 20);
	return 0;

}