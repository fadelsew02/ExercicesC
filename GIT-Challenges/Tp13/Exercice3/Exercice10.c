#include<stdio.h>
#include <stdlib.h>
#include <time.h>
#include <SDL.h>

#include "histogramme.h"

void extrais_composantes(SDL_Surface *surface, int tab_r[], int tab_v[], int tab_b[]);
int genere_entier(int lim);
void genere_tableau(int tab[], int taille, int lim);

int main(int argc, char **argv){
    int entier = 0;
    int nombreAleatoire = 0;
    int size = 0;

    SDL_Window *window = NULL;
    SDL_Renderer *rendu = NULL;
    SDL_Surface *surface = NULL;

    surface = SDL_LoadBMP("image_out.bmp");
    if(surface == NULL){
        fprintf(stderr,"Erreur lors du chargement de l'image: %s",SDL_GetError());
    }
/* 
    printf("Entrez une taille pour le tableau: \n \t\t %c",175);
    scanf("%d",&size);
    if(size < 0){
        size = -1*size;
    } */
    int tab[size];
    int decompte[VAL_MAX+1] = {0};
    genere_tableau(tab,size,VAL_MAX);
    affiche_tableau(tab,size);
    // decompte_valeurs(tab,size,decompte);
    int classes[32] = {0};
    int tab_r[30625];
    int tab_v[30625];
    int tab_b[30625];
    extrais_composantes(surface,tab_r,tab_v,tab_b);
    // regroupe_classes(decompte, 32, classes);

    system("pause");
    SDL_DestroyRenderer(rendu);
    SDL_DestroyWindow(window);
    return EXIT_SUCCESS;
}

int genere_entier(int limite){
    return (rand()%(limite+1));
}

void genere_tableau(int tab[], int size, int lim){
    srand(time(NULL));
    for(int i=0; i< size; i++){
        tab[i] = genere_entier(lim);
    }
}

void extrais_composantes(SDL_Surface *surface, int tab_r[], int tab_v[], int tab_b[]){
    Uint8 r,g,b;
    int i=0;
    Uint8 *pPixels = surface->pixels;
    SDL_LockSurface(surface);
    for (int x = 0; x < surface->w; x++){
        for(int y = 0; y < surface->h; y++){
            r = *(pPixels+4*(x*surface->w+(10+1)));
            g = *(pPixels+4*(x*surface->w+(10+1))+1);
            b = *(pPixels+4*(x*surface->w+(10+1))+2);
            //printf("x = %d; y = %d; r: %d g: %d b: %d \n",x,y,r,g,b);
            tab_r[i] = r;
            tab_v[i] = g;
            tab_b[i] = b;
            i++;
        }
    }
    SDL_UnlockSurface(surface);
}