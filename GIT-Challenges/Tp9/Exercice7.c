#include<stdio.h>
#include<stdlib.h>
#include <SDL.h>

int	main(int argc, char *argv[]){

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

int coordX[14]= {495,495,250,250,495,495,5,5,5,5,5,5,495,495};
int coordY[14]= {5,5,250,250,495,495,5,5,495,495,250,250,250,250};
int posXCarre;
int posYCarre;

int i = 0;
while(1){
    posXCarre = coordX[i];
    posYCarre = coordY[i];

    if( i== 0){
        if(SDL_SetRenderDrawColor(renderer,255,0,0,SDL_ALPHA_OPAQUE) != 0){
            fprintf(stderr,"Impossible de changer de couleur: %s",SDL_GetError());
            return EXIT_FAILURE;
        }
    }else if(i == 2){
        if(SDL_SetRenderDrawColor(renderer, 255,255,255,SDL_ALPHA_OPAQUE) != 0){
            fprintf(stderr,"Impossible de changer de couleur: %s",SDL_GetError());
            return EXIT_FAILURE;
        }
    }else if(i == 4){
        if(SDL_SetRenderDrawColor(renderer,0,255,0,SDL_ALPHA_OPAQUE) != 0){
            fprintf(stderr,"Impossible de changer de couleur: %s",SDL_GetError());
            return EXIT_FAILURE;
        }
    }else if(i == 6){
        if(SDL_SetRenderDrawColor(renderer,0,0,255,SDL_ALPHA_OPAQUE) != 0){
            fprintf(stderr,"Impossible de changer de couleur: %s",SDL_GetError());
            return EXIT_FAILURE;
        }
    }else if(i == 8){
        if(SDL_SetRenderDrawColor(renderer,255,255,0,SDL_ALPHA_OPAQUE) != 0){
            fprintf(stderr,"Impossible de changer de couleur: %s",SDL_GetError());
            return EXIT_FAILURE;
        }
    }else if(i == 10){
        if(SDL_SetRenderDrawColor(renderer,237,137,16,SDL_ALPHA_OPAQUE) != 0){
            fprintf(stderr,"Impossible de changer de couleur: %s",SDL_GetError());
            return EXIT_FAILURE;
        }
    }else if(i == 12){
        if(SDL_SetRenderDrawColor(renderer,125,125,125,SDL_ALPHA_OPAQUE) != 0){
            fprintf(stderr,"Impossible de changer de couleur: %s",SDL_GetError());
            return EXIT_FAILURE;
        }
    }else{
        if(SDL_SetRenderDrawColor(renderer,0,0,0,SDL_ALPHA_OPAQUE) != 0){
            fprintf(stderr,"Impossible de changer de couleur: %s",SDL_GetError());
            return EXIT_FAILURE;
        }
    }

    SDL_Rect carre;
    carre.x = posXCarre;
    carre.y = posYCarre;
    carre.w = 100;
    carre.h = 100;

    if(SDL_RenderFillRect(renderer, &carre) != 0){
        fprintf(stderr,"Erreur de creation du carré: %s",SDL_GetError());
    }

    SDL_RenderPresent(renderer);
    SDL_Delay(1000);
    i++;
    if(i == 14){
        break;
    }

}

    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();
    system("pause");
    return EXIT_SUCCESS;
}
// gcc src/main.c -o bin/prog -I include -L lib -lmingw32 -lSDL2main -lSDL2
