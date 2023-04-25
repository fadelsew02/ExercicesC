#include<stdio.h>
#include <stdlib.h>
#include <time.h>
#include <SDL.h>

#include "histogramme.h"

void extrais_composantes(SDL_Surface *surface, int tab_r[], int tab_v[], int tab_b[]);
void analyse_surface(SDL_Surface *surface);

int main(int argc, char **argv){

    SDL_Window *window = NULL;
    SDL_Renderer *rendu = NULL;
    SDL_Surface *surface = NULL;

    surface = SDL_LoadBMP("photo_out_out.bmp");
    if(surface == NULL){
        fprintf(stderr,"Erreur lors du chargement de l'image: %s",SDL_GetError());
    }

    analyse_surface(surface);
    system("pause");
    SDL_DestroyRenderer(rendu);
    SDL_DestroyWindow(window);
    return EXIT_SUCCESS;
}

void extrais_composantes(SDL_Surface *surface, int *tab_r, int *tab_v, int *tab_b){
    Uint8 r,g,b;
    int i=0;
    Uint8 *pPixels = surface->pixels;
    SDL_LockSurface(surface);
    for (int x = 0; x < surface->w; x++){
        for(int y = 0; y < surface->h; y++){
            r = *(pPixels+4*(x*surface->w+(y+1)));
            g = *(pPixels+4*(x*surface->w+(y+1))+1);
            b = *(pPixels+4*(x*surface->w+(y+1))+2);
            //printf("x = %d; y = %d; r: %d g: %d b: %d \n",x,y,r,g,b);
            tab_r[i] = r;
            tab_v[i] = g;
            tab_b[i] = b;
            i++;
        }
    }
    SDL_UnlockSurface(surface);
}


void analyse_surface(SDL_Surface *surface){
    int tab_r[30625];
    int tab_v[30625];
    int tab_b[30625];
    int tab[30625];
    int decompte[VAL_MAX+1] = {0};
    extrais_composantes(surface,tab_r,tab_v,tab_b);

    for(int i=0; i<30625; i++){
        tab[i] = tab_r[i];
    }

    for(int i=0; i<3; i++){
        if(i == 1){
            for(int g=0; g<30625; g++){
                tab[i] = tab_v[i];
            }
        }else if(i == 2){
            for(int i=0; i<30625; i++){
                tab[i] = tab_b[i];
            }
        }
        decompte_valeurs(tab,30625,decompte);
        for(int y=0; y<VAL_MAX+1; y++){
            decompte[y] = 0;
        }
    }
}
