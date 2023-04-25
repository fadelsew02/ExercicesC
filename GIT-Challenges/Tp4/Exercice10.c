#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int	main(int argc, char **argv){
    
    int nombreMystere = 0, nombreEntre = 0, i=1;
    const int MAX = 100, MIN = 1;

    srand(time(NULL));
    nombreMystere = (rand() % (MAX - MIN + 1)) + MIN;

    printf("J'ai tire un nombre au hasard : Essayez de le devinez!\n\n");
    do{
        printf("Tentative number %d ? ",i);
        scanf("%d", &nombreEntre);
        if (nombreMystere > nombreEntre){
            printf("La valeur %d est trop petite !\n\n",nombreEntre);
        }else if (nombreMystere < nombreEntre){
            printf("La valeur %d est trop grande!\n\n",nombreEntre);
        }else{
            printf ("Bravo, vous avez trouve le nombre mystere!!!\n\n");
        }
        i++;
    } while (nombreEntre != nombreMystere);

    system("pause");
    return 0;
}
