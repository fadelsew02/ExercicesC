#include<stdio.h>
#include<stdlib.h>
#include <SDL.h>

int	main(int argc, char **argv){

    SDL_Window *window = NULL;
    if(SDL_Init(SDL_INIT_VIDEO) != 0){
        fprintf(stderr, "Erreur SDL_Init: %s",SDL_GetError());
        return EXIT_FAILURE;
    }

    window = SDL_CreateWindow("La fenetre graphique SDL",200,200,640,480,SDL_WINDOW_SHOWN );

    if(window == NULL){
        fprintf(stderr,"Erreur SDL_CreatWindow: %s",SDL_GetError());
        return EXIT_FAILURE;
    }
    // SDL_version nb;
    // SDL_VERSION(&nb);
    // printf("Bienvenue sur la SDL %d.%d.%d ! \n",nb.major, nb.minor, nb.patch);
    SDL_Delay(9000);
    SDL_Quit();
    system("pause");
    return EXIT_SUCCESS;
}
// gcc src/main.c -o bin/prog -I include -L lib -lmingw32 -lSDL2main -lSDL2
