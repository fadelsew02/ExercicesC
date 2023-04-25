#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

#define J1_JETON ('O')
#define J2_JETON ('X')
#define TRUE 1
#define FALSE 0

static void initialise_grille(void);
static void affiche_grille(void);

char grille[3][3];


static void initialise_grille(void)
{
    int ligne;
    int colonne;
    for(ligne = 0; ligne < 3; ligne++)
    {
        for(colonne = 0; colonne < 3; colonne++)
        {
            if(ligne == 0)
            {
                grille[0][colonne] = J2_JETON;
            }
            else if(ligne == 2)
            {
                grille[2][colonne] = J1_JETON;
            }
            else
                grille[ligne][colonne] = ' ';
        }
    }
}


static void affiche_grille(void)
{
    int ligne;
    int colonne;

    for(colonne = 1; colonne <= 3; colonne++)
    {
        printf(" %2d ",colonne);
    }
    putchar('\n');
    putchar('+');
    for(colonne = 0; colonne < 3; colonne++)
    {
        printf("---+");
    }
    putchar('\n');
    for(ligne = 0; ligne < 3; ligne++)
    {
        printf("%d |",&ligne+1);
        for(colonne = 0; colonne < 3; colonne++)
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
        for(colonne = 1; colonne <= 3; ++colonne)
        {
            printf("---+");
        }
        putchar('\n');
    }
    for(colonne = 1; colonne <= 3; ++colonne)
    {
        printf(" %2d ", colonne);
    }
    putchar('\n');
}



int main(void)
{
    char jeton = J1_JETON;
    int i = 0;
    int ligne = 0;
    int colonne = 0;
    int statut = 0;

    printf("Aligner trois pions et vous gagnez, dans le cas contraire vous perdez");
    printf("\n");
    printf("Appuyer 2 pour avancer, 8 pour reculer, 6 pour la droite, 4 pour la gauche");
    printf("\n");
    printf("Appuyer 1 pour gauche haut, 3 droite haut, 9 pour droite bas, 7 pour gauche bas");
    printf("\n\n");
    initialise_grille();
    affiche_grille();
    do
    {
        printf("Joueur %d: ", (jeton == J1_JETON) ? 1 : 2);
        scanf("%d  %d",&ligne, &colonne);
        ligne--;
        colonne--;
        while(ligne < 1 || ligne > 3 || colonne < 1 || colonne > 3)
        {
            printf("Entrez des coordonnées correctes.");
            scanf("%d %d", &ligne, &colonne);
        }
        grille[ligne][colonne] = jeton;
        affiche_grille();
        i++;
    }while(i < 3);
    return 0;
}