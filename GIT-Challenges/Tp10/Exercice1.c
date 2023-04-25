#include<stdio.h>
#include<stdlib.h>
#include<SDL.h>

int main(int argc, char **argv){
    
    SDL_Window *window = NULL;
    SDL_Renderer *renderer = NULL;
    SDL_Surface *image = NULL;
    SDL_Texture *texture = NULL; 
    int statut = EXIT_FAILURE;

    image = SDL_LoadBMP("photo_out.bmp");
    if(image == NULL){
        fprintf(stderr,"Erreur lors du chargement de l'image: %s",SDL_GetError());
        goto Quit;
    }

    if(SDL_Init(SDL_INIT_VIDEO) != 0){
        fprintf(stderr, "Erreur SDL_Init: %s",SDL_GetError());
        // return EXIT_FAILURE;
        goto Quit;
    }

    window = SDL_CreateWindow("La fenetre graphique SDL",SDL_WINDOWPOS_CENTERED,SDL_WINDOWPOS_CENTERED,826,734,SDL_WINDOW_SHOWN);
    renderer = SDL_CreateRenderer(window,-1,SDL_RENDERER_SOFTWARE);

    if(window == NULL){
        fprintf(stderr,"Erreur SDL_CreateWindow: %s",SDL_GetError());
        // return EXIT_FAILURE;
        goto Quit;
    }
    if(renderer == NULL){
        fprintf(stderr,"Erreur SDL_CreateRenderer: %s",SDL_GetError());
        // return EXIT_FAILURE;
        goto Quit;
    }

    texture = SDL_CreateTextureFromSurface(renderer, image);
    SDL_FreeSurface(image);
    if(texture == NULL){
        fprintf(stderr,"Erreur SDL_CreateTextureFromSurface: %s",SDL_GetError());
        goto Quit;
    }

    SDL_Rect rectangle;
    if(SDL_QueryTexture(texture, NULL, NULL, &rectangle.w, &rectangle.h) != 0){
        fprintf(stderr, "Erreur SDL_QueryTexture: %s",SDL_GetError());
        goto Quit;
    }

    rectangle.x = 0;
    rectangle.y = 0;

    if(SDL_RenderCopy(renderer, texture, NULL, &rectangle) != 0){
        fprintf(stderr, "Erreur SDL_RenderCopy: %s",SDL_GetError());
        goto Quit;
    }

    SDL_RenderPresent(renderer);
    SDL_Delay(5000);
    statut = EXIT_SUCCESS;

Quit : 
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();
    system("pause");
    return statut;
}