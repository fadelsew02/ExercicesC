#include<stdio.h>
#include<stdlib.h>
#include <SDL.h>

#define C_BLEU (0,0255)
#define C_JAUNE ( 255,255,0)
#define C_ROUGE (255,0,0)
#define C_VERT (0,255,0)
#define C_ORANGE (237,137,16)
#define C_BLANC (255,255,255)
#define C_GRIS (125,125,125)
#define C_NOIR (0,0,0)

int	main(int argc, char **argv){

   
    if(SDL_Init(SDL_INIT_VIDEO) != 0){
        fprintf(stderr, "Erreur SDL_Init: %s",SDL_GetError());
        return EXIT_FAILURE;
    }

    SDL_Delay(9000);
    SDL_Quit();
    system("pause");
    return EXIT_SUCCESS;
}
// gcc src/main.c -o bin/prog -I include -L lib -lmingw32 -lSDL2main -lSDL2
