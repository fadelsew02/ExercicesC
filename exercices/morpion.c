#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>


#define J1_JETON ('O')
#define J2_JETON ('X')
#define TRUE 1
#define FALSE 0
#define STATUT_OK 0
#define STATUT_EGALITE 1
#define STATUT_GAGNE 2

char grille[3][3];

static void initialise_grille(void);
static int Egalite(char jeton);
static void affiche_grille(void);
static int joue(int ligne, int colonne, char jeton);
static int grille_complete(void);
static unsigned nb_de_jetons_depuis(int ligne, int colonne, int dpl_vrt, int dpl_hrz);
static int coup_valide(int ligne, int colonne);
static int statut_jeu(char jeton);



static void initialise_grille(void)
{
	unsigned ligne;
	unsigned colonne;
	for(ligne = 0; ligne < 3; ligne++)
	{
		for(colonne = 0; colonne < 3; colonne++)
		{
			grille[ligne][colonne] = ' ';
		}
	}
}

static void affiche_grille(void)
{
	unsigned ligne;
	unsigned colonne;
	for(colonne = 0; colonne < 3; colonne++)
	{
		printf("---");
	}
	printf("+");
	printf("\n");
	for(ligne = 0; ligne < 3; ligne++)
	{
		printf("|");
		for(colonne = 0; colonne < 3; colonne++)
		{
			if(isalpha(grille[ligne][colonne]))
			{
				printf("%c |",grille[ligne][colonne]); 
			}
			else
			{
				printf("%c |",' ');
			}
		}
		printf("\n");
		for(colonne = 0; colonne < 3; colonne++)
	    {
		    printf("---");
	    }
	    printf("+");
	    printf("\n");
	}	
}

static int joue(int ligne, int colonne, char jeton)
{
	int x = 0;
	int y = 0;
	while(ligne < 1 || ligne > 3 || colonne < 1 || colonne > 3 || grille[ligne][colonne] != ' ')
	{
		printf("Les coordonnées que vous venez de saisir sont incorrectes.\n");
		scanf("%d %d",&ligne,&colonne);
	}
	x = ligne - 1;
	y = colonne - 1;
	if(grille[x][y] != ' ')
	{
		return FALSE;
	}
	else
	{
		grille[x][y] = jeton;
		return TRUE;
	}
}


static int grille_complete(void)
{
	/*
	 *Détermine si la grille de jeu est complete.
	 */
	unsigned col;
	unsigned lgn;
	for(lgn = 0; lgn < 3; ++lgn)
	{
		for(col = 0; col < 3; ++col)
		{
			if(grille[lgn][col] == ' ')
			{
				return 0;
			}
		}
	}
	return 1;
}


static unsigned nb_de_jetons_depuis(int ligne, int colonne, int dpl_vrt, int dpl_hrz)
{
	unsigned cpt = 0;
	int lgn = ligne;
	int col = colonne;
	while(lgn < 3 && col < 3 && grille[lgn][col] == grille[ligne][colonne])
	{
		cpt++;
		lgn = lgn + dpl_vrt;
		col = col + dpl_hrz;
	}
	return cpt;
}


static int coup_valide(int ligne, int colonne)
{
	if(grille[ligne][colonne] == ' ')
		return FALSE;
	else
		return TRUE;
}

static int statut_jeu(char jeton)
{
	char kase;
	int ligne;
	int colonne;
	for(ligne = 0; ligne < 3; ligne++)
	{
		for(colonne = 0; colonne < 3; colonne++)
		{
			kase = grille[ligne][colonne];
			if(kase == jeton)
			{
				if((nb_de_jetons_depuis(ligne, colonne, -1, +1) >= 3))//en diagonale vers le haut et la droite
					return TRUE;
				if((nb_de_jetons_depuis(ligne, colonne, 0, +1) >= 3))//horizontalement vers la droite
					return TRUE;
				if((nb_de_jetons_depuis(ligne, colonne, +1, +1) >= 3))//en diagonale vers le bas et la droite
					return TRUE;
				if((nb_de_jetons_depuis(ligne, colonne, +1, 0) >= 3))//verticalement vers le bas
					return TRUE;
			}
		}
	}
	return FALSE;
}


static int Egalite(char jeton)
{
	if(grille_complete())
		return STATUT_EGALITE;
	else if(statut_jeu(jeton))
	{
		return STATUT_GAGNE;
	}
	return STATUT_OK;
}



int main(void)
{
	int valide;
	int colonne = 0, ligne = 0;
	int i = 0;
	char jeton = J1_JETON;
	int statut;
	int egalite;

	initialise_grille();
	affiche_grille();
	do
	{
		printf("Joueur %d :",(jeton == J1_JETON)?1:2);
		scanf("%d %d",&ligne,&colonne);	
		valide = joue(ligne, colonne, jeton);
	    if(valide == FALSE)
        {
   	        printf("Impossible d'ajouter un pion sur cette colonne\n");
   	        continue;
        }
        affiche_grille();
        statut = statut_jeu(jeton);
        egalite = Egalite(jeton);
        jeton = ((jeton == J1_JETON)?J2_JETON:J1_JETON);   
    }while(egalite == STATUT_OK);

    if(egalite == STATUT_GAGNE)
    {
    	if(jeton == J1_JETON)
    	{
    		printf("Le joueur 2 a gagne! Felicitation\n\n");
    	}
    	else if(jeton == J2_JETON)
    	{
    		printf("Le joueur 1 a gagne! Felicitation\n\n");
    	}
    }
    else if(egalite == STATUT_EGALITE)
    {
    	printf("Egalite! \n\n");
    }
	
	return 0; 
}