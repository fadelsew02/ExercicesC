#include<stdio.h>
#include<stdlib.h>
#include<stddef.h>
#include<ctype.h>
#include<time.h>


#define J1_JETON ('O')
#define J2_JETON ('X')
#define TRUE 1
#define FALSE 0
#define STATUT_OK 0
#define STATUT_EGALITE 1
#define STATUT_GAGNE 2
#define max 7
#define min 1

static int Egalite(char jeton);
static int statut_jeu(char jeton);
static int joue(int coup, char jeton);
static unsigned nb_de_jetons_depuis(int ligne, int colonne, int dpl_vrt, int dpl_hrz);
static int grille_complete(void);
static void affiche_grille(void);
static void initialise_grille(void);
static int ia(char jeton);


char grille[6][7];


static void initialise_grille(void)
{
	int ligne;
	int colonne;
	for(ligne = 0; ligne < 6; ligne++)
	{
		for(colonne = 0; colonne < 7; colonne++)
		{
			grille[ligne][colonne] = ' ';
		}
	}
}


static void affiche_grille(void)
{
   /*
    * Affiche la grille pour le ou les joueurs
	*/

	int colonne;
	int ligne;

	putchar('\n');

	for(colonne = 1; colonne <= 7; ++colonne)
	{
		printf(" %2d ", colonne);
	}
	putchar('\n');
	putchar('+');

	for(colonne = 1; colonne <= 7; ++colonne)
	{
		printf("---+");
	}
	putchar('\n');
	for(ligne = 0; ligne < 6; ++ligne)
	{
		putchar('|');
		for(colonne = 0; colonne < 7; ++colonne)
		{
			if (isalpha(grille[ligne][colonne]))
			{
				printf(" %c |",grille[ligne][colonne]);
			}
			else
			{
				printf(" %c |", ' ');
			}
		}
		putchar('\n');
		putchar('+');
		for(colonne = 1; colonne <= 7; ++colonne)
		{
			printf("---+");
		}
		putchar('\n');
	}
	for(colonne = 1; colonne <= 7; ++colonne)
	{
		printf(" %2d ", colonne);
	}
	putchar('\n');		
}

static int joue(int coup, char jeton)
{
	int colonnepleine = FALSE;
	unsigned ligne;
	int x = 0;
	while(coup > 7 || coup < 1)
	{
		printf("Veuillez rejouer\n");
		scanf("%d",&coup);
	}
	x = coup-1;
	while(colonnepleine == FALSE && grille[ligne][x] != ' ')
	{
		if(ligne == 0)
		{
			colonnepleine = TRUE;
		}
		else
		{
			ligne--;
		}
    }
    if(colonnepleine == FALSE)
    {
    	grille[ligne][x] = jeton;
    	return TRUE;
    }
    else
    {
    	return FALSE;
    }
}

static unsigned nb_de_jetons_depuis(int ligne, int colonne, int dpl_vrt, int dpl_hrz)
{
	unsigned cpt = 0;
	int lgn = ligne;
	int col = colonne;
	while(lgn < 6 && col < 7 && grille[lgn][col] == grille[ligne][colonne])
	{
		cpt++;
		lgn = lgn + dpl_vrt;
		col = col + dpl_hrz;
	}
	return cpt;
}



static int grille_complete(void)
{
	/*
	 *Détermine si la grille de jeu est complete.
	 */
	unsigned col;
	unsigned lgn;
	for(lgn = 0; lgn < 6; ++lgn)
	{
		for(col = 0; col < 7; ++col)
		{
			if(grille[lgn][col] == ' ')
			{
				return 0;
			}
		}
	}
	return 1;
}



static int statut_jeu(char jeton)
{
	char kase;
	int ligne;
	int colonne;
	for(ligne = 0; ligne < 6; ligne++)
	{
		for(colonne = 0; colonne < 7; colonne++)
		{
			kase = grille[ligne][colonne];
			if(kase == jeton)
			{
				if((nb_de_jetons_depuis(ligne, colonne, -1, +1) >= 4))//en diagonale vers le haut et la droite
					return TRUE;
				if((nb_de_jetons_depuis(ligne, colonne, 0, +1) >= 4))//horizontalement vers la droite
					return TRUE;
				if((nb_de_jetons_depuis(ligne, colonne, +1, +1) >= 4))//en diagonale vers le bas et la droite
					return TRUE;
				if((nb_de_jetons_depuis(ligne, colonne, +1, 0) >= 4))//verticalement vers le bas
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


static int ia(char jeton)
{
	int numcolonne = 0;  

    srand(time(NULL));
    numcolonne = (rand() % (max - min + 1)) + min;
    
	return numcolonne;
}


int main(void)
{
	int valide ;
	int egalite;
	char jeton = J1_JETON;
	int coup = 0;
	int statut = 0;
	int njoueurs = 0;

	initialise_grille();
	affiche_grille();
	do
    {
    	printf("Combien de joueurs prennent part à cette partie ?");
        if(scanf("%d",&njoueurs) != 1 || ferror(stdin))
        {
        	fprintf(stderr,"Erreur lors de la saisie!\n");
        	return 0;
        }
    }while(njoueurs != 1 && njoueurs != 2);
    do
    {
    	if(njoueurs == 1)
    	{
    		if(jeton == J1_JETON)
    		{
    			printf("Joueur IA :");
    			coup = ia(jeton);
    			valide = joue(coup, jeton);
    			printf("%d",coup);
    		}
    		else if(jeton == J2_JETON)
    		{
                printf("Joueur 2 : ");
                scanf("%d",&coup);
                valide = joue(coup, jeton);
   			}
    		if(valide == FALSE)
    		{
    			printf("Impossible d'ajouter un pion sur cette colonne\n");
    			continue;
    		}
    	}
    	else
    	{
    		printf("Joueur %d :",(jeton == J1_JETON)?1:2);
	        scanf("%d",&coup);
            valide = joue(coup, jeton);
            if(valide == FALSE)
            {
    	        printf("Impossible d'ajouter un pion sur cette colonne\n");
    	        continue;
            }
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
