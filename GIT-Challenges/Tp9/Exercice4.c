#include<stdio.h>
#include<stdlib.h>
#include <SDL.h>

  // if(SDL_CreateWindowAndRenderer(800, 600, 0,&window,&renderer) != 0)
    // {
    //      fprintf(stderr,"Erreur SDL_CreatWindow: %s",SDL_GetError());
    //     return EXIT_FAILURE;
    // }

int	main(int argc, char **argv){

    SDL_Window *window = NULL;
    SDL_Renderer *renderer = NULL;

    if(SDL_Init(SDL_INIT_VIDEO) != 0){
        fprintf(stderr, "Erreur SDL_Init: %s",SDL_GetError());
        return EXIT_FAILURE;
    }

    window = SDL_CreateWindow("Fadel SEWADE",SDL_WINDOWPOS_CENTERED,SDL_WINDOWPOS_CENTERED,600,600,SDL_WINDOW_SHOWN);
    renderer = SDL_CreateRenderer(window,-1,SDL_RENDERER_SOFTWARE);
  
    if(window == NULL){
        fprintf(stderr,"Erreur SDL_CreateWindow: %s",SDL_GetError());
        return EXIT_FAILURE;
    }
     if(renderer == NULL){
        fprintf(stderr,"Erreur SDL_CreateRenderer: %s",SDL_GetError());
        return EXIT_FAILURE;
    }

    if(SDL_SetRenderDrawColor(renderer, 125,125,125,SDL_ALPHA_OPAQUE) != 0){
        fprintf(stderr,"Impossible de changer de couleur: %s",SDL_GetError());
        return EXIT_FAILURE;
    }

    SDL_Rect carre;
    carre.x = 100;
    carre.y = 100;
    carre.w = 400;
    carre.h = 400;
    if(SDL_RenderFillRect(renderer, &carre) != 0){
        fprintf(stderr,"Erreur de creation du carré: %s",SDL_GetError());
    }

    SDL_RenderPresent(renderer);
    SDL_Delay(9000);


    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();
    system("pause");
    return EXIT_SUCCESS;
}
// gcc src/main.c -o bin/prog -I include -L lib -lmingw32 -lSDL2main -lSDL2
