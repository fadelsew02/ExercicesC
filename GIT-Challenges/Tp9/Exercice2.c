#include<stdio.h>
#include<stdlib.h>
#include <SDL.h>

int	main(int argc, char **argv){

    SDL_Window *window = NULL;
    SDL_Renderer *renderer = NULL;

    if(SDL_Init(SDL_INIT_VIDEO) != 0){
        fprintf(stderr, "Erreur SDL_Init: %s",SDL_GetError());
        return EXIT_FAILURE;
    }

    window = SDL_CreateWindow("Fadel SEWADE",SDL_WINDOWPOS_CENTERED,SDL_WINDOWPOS_CENTERED,600,600,SDL_WINDOW_SHOWN);
    renderer = SDL_CreateRenderer(window,-1,SDL_RENDERER_SOFTWARE);
    // if(SDL_CreateWindowAndRenderer(800, 600, 0,&window,&renderer) != 0)
    // {
    //      fprintf(stderr,"Erreur SDL_CreatWindow: %s",SDL_GetError());
    //     return EXIT_FAILURE;
    // }

    SDL_RenderPresent(renderer);
    if(window == NULL){
        fprintf(stderr,"Erreur SDL_CreatWindow: %s",SDL_GetError());
        return EXIT_FAILURE;
    }
    SDL_Delay(9000);

    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();
    system("pause");
    return EXIT_SUCCESS;
}
// gcc src/main.c -o bin/prog -I include -L lib -lmingw32 -lSDL2main -lSDL2
