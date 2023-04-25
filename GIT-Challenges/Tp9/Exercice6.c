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

// Carré blanc du milieu 
    if(SDL_SetRenderDrawColor(renderer, 255,255,255,SDL_ALPHA_OPAQUE) != 0){
        fprintf(stderr,"Impossible de changer de couleur: %s",SDL_GetError());
        return EXIT_FAILURE;
    }

    SDL_Rect carreBlanc;
    carreBlanc.x = 250;
    carreBlanc.y = 250;
    carreBlanc.w = 100;
    carreBlanc.h = 100;
    if(SDL_RenderFillRect(renderer, &carreBlanc) != 0){
        fprintf(stderr,"Erreur de creation du carré: %s",SDL_GetError());
    }
// ---------------------------------------------------------------------------------------------

// Carré bleu  
    if(SDL_SetRenderDrawColor(renderer,0,0,255,SDL_ALPHA_OPAQUE) != 0){
        fprintf(stderr,"Impossible de changer de couleur: %s",SDL_GetError());
        return EXIT_FAILURE;
    }

    SDL_Rect carreBleu;
    carreBleu.x = 5;
    carreBleu.y = 5;
    carreBleu.w = 100;
    carreBleu.h = 100;
    if(SDL_RenderFillRect(renderer, &carreBleu) != 0){
        fprintf(stderr,"Erreur de creation du carré: %s",SDL_GetError());
    }

// ---------------------------------------------------------------------------------------------

// Carré orange 
    if(SDL_SetRenderDrawColor(renderer,237,137,16,SDL_ALPHA_OPAQUE) != 0){
        fprintf(stderr,"Impossible de changer de couleur: %s",SDL_GetError());
        return EXIT_FAILURE;
    }

    SDL_Rect carreOrange;
    carreOrange.x = 5;
    carreOrange.y = 250;
    carreOrange.w = 100;
    carreOrange.h = 100;
    if(SDL_RenderFillRect(renderer, &carreOrange) != 0){
        fprintf(stderr,"Erreur de creation du carré: %s",SDL_GetError());
    }

// ---------------------------------------------------------------------------------------------

// Carré jaune  
    if(SDL_SetRenderDrawColor(renderer,255,255,0,SDL_ALPHA_OPAQUE) != 0){
        fprintf(stderr,"Impossible de changer de couleur: %s",SDL_GetError());
        return EXIT_FAILURE;
    }

    SDL_Rect carreJaune;
    carreJaune.x = 5;
    carreJaune.y = 495;
    carreJaune.w = 100;
    carreJaune.h = 100;
    if(SDL_RenderFillRect(renderer, &carreJaune) != 0){
        fprintf(stderr,"Erreur de creation du carré: %s",SDL_GetError());
    }

// ---------------------------------------------------------------------------------------------

// Carré Rouge 
    if(SDL_SetRenderDrawColor(renderer,255,0,0,SDL_ALPHA_OPAQUE) != 0){
        fprintf(stderr,"Impossible de changer de couleur: %s",SDL_GetError());
        return EXIT_FAILURE;
    }

    SDL_Rect carreRouge;
    carreRouge.x = 495;
    carreRouge.y = 5;
    carreRouge.w = 100;
    carreRouge.h = 100;
    if(SDL_RenderFillRect(renderer, &carreRouge) != 0){
        fprintf(stderr,"Erreur de creation du carré: %s",SDL_GetError());
    }

// ---------------------------------------------------------------------------------------------

// Carré gris 
    if(SDL_SetRenderDrawColor(renderer,125,125,125,SDL_ALPHA_OPAQUE) != 0){
        fprintf(stderr,"Impossible de changer de couleur: %s",SDL_GetError());
        return EXIT_FAILURE;
    }

    SDL_Rect carreGris;
    carreGris.x = 495;
    carreGris.y = 250;
    carreGris.w = 100;
    carreGris.h = 100;
    if(SDL_RenderFillRect(renderer, &carreGris) != 0){
        fprintf(stderr,"Erreur de creation du carré: %s",SDL_GetError());
    }

// ---------------------------------------------------------------------------------------------

// Carré vert 
    if(SDL_SetRenderDrawColor(renderer,0,255,0,SDL_ALPHA_OPAQUE) != 0){
        fprintf(stderr,"Impossible de changer de couleur: %s",SDL_GetError());
        return EXIT_FAILURE;
    }

    SDL_Rect carreVert;
    carreVert.x = 495;
    carreVert.y = 495;
    carreVert.w = 100;
    carreVert.h = 100;
    if(SDL_RenderFillRect(renderer, &carreVert) != 0){
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
