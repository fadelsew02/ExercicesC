#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]){
    float reel=0.0;

    printf("Entrez le nombre reel:\t ");
    scanf("%f",&reel);
    

    printf("Resultat de la troncature:\t %.2f \n",reel);
    system("pause");
    return EXIT_SUCCESS;
}