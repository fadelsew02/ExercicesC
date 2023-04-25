#include<stdio.h>
#include<stdlib.h>
#include<math.h>

#include<SDL.h>

#include "fichier.h"

void affiche_matrice(double mat[n][n]){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            printf("  %.6f",mat[i][j]);
        }
        printf("\n");
    }
}
 
void initialise_rotation(double mat[n][n]){
    double theta = PI / 2.0;

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i == 0 && j == 0){
                mat[i][j] = cos(theta);
            }else if(i == 0 && j == 1){
                mat[i][j] = -1 * sin(theta);
            }else if(i == 1 && j == 0){
                mat[i][j] = sin(theta);
            }else if(i == 1 && j == 1){
                mat[i][j] = cos(theta);
            }
        }
    }
    // affiche_matrice(mat);
}

void affiche_vecteur(s_vecteur vect){
    printf(" ( ");
    printf("%.6f", vect.x);
    printf(" ) \n");
    printf(" ( ");
    printf("%.6f", vect.y);
    printf(" ) \n");
}

void applique_rotation(double m[n][n], s_vecteur v, s_vecteur* resultat){
    
    (*resultat).x = (v.x)*m[0][0] + (v.y)*m[0][1];
    (*resultat).y = (v.x)*m[1][0] + (v.y)*m[1][1];
}

void dessine_carre(int x_O int y_O, s_vecteur v_OA){
    
    SDL_Window *window = NULL;
    SDL_Renderer *renderer = NULL;

    if(SDL_Init(SDL_INIT_VIDEO) != 0){
        fprintf(stderr, "Erreur SDL_Init: %s",SDL_GetError());
    }

    window = SDL_CreateWindow("Fadel SEWADE",SDL_WINDOWPOS_CENTERED,SDL_WINDOWPOS_CENTERED,800,800,SDL_WINDOW_SHOWN);
    renderer = SDL_CreateRenderer(window,-1,SDL_RENDERER_SOFTWARE);
  
    if(window == NULL){
        fprintf(stderr,"Erreur SDL_CreateWindow: %s",SDL_GetError());
    }
    
    if(renderer == NULL){
        fprintf(stderr,"Erreur SDL_CreateRenderer: %s",SDL_GetError());
    }

    if(SDL_SetRenderDrawColor(renderer, 255, 250, 250, SDL_ALPHA_OPAQUE) != 0){
        fprintf(stderr, "Erreur SDL_SetRenderDrawColor: %s", SDL_GetError());
    }

    int x_A = x_O + (v_OA).x;
    int y_A = y_O + (v_OA).y;
    
    int x_C = x_O - (v_OA).x;
    int y_C = y_O - (v_OA).y;

    int x_B = x_O - (v_OA).y;
    int y_B = y_O - (v_OA).x;

    int x_D = x_O - (y_C - y_O);
    int y_D = y_O - (x_C - x_O);

    if(SDL_RenderDrawLine(renderer, x_A, y_A, x_B, y_B) != 0){
        fprintf(stderr,"Erreur SDL_RenderDrawLine: %s",SDL_GetError());
    }

    if(SDL_RenderDrawLine(renderer, x_B, y_B, x_C, y_C) != 0){
        fprintf(stderr,"Erreur SDL_RenderDrawLine: %s",SDL_GetError());
    }

    if(SDL_RenderDrawLine(renderer, x_C, y_C, x_D, y_D) != 0){
        fprintf(stderr,"Erreur SDL_RenderDrawLine: %s",SDL_GetError());
    }

    if(SDL_RenderDrawLine(renderer, x_D, y_D, x_A, y_A) != 0){
        fprintf(stderr,"Erreur SDL_RenderDrawLine: %s",SDL_GetError());
    }

    SDL_RenderPresent(renderer);
    SDL_Delay(10000);

    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();
    


}