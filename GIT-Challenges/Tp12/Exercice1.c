#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#include <SDL.h>

void trace_segment_naif(int xa, int ya, int xb, int yb);
float f(float inter, float a, float xa, float y0);
void algorithme(float *xa, float *xb, float *ya, float *yb, SDL_Renderer *rendu);
int arrondit(float x);
int main(int argc, char **argv){
    float x1, y1, x2, y2;

Reprise:
    printf("Entrez les coordonnees des deux points A et B(coordonnees pouvant a 600) de telle a ce que le coefficient directeur soit compris entre 0 et 1:\n\n");
    printf("Le point A: Ses deux coordonnes doivent etre inferieures a celles du point B: \n \t\t xA = ");
    scanf("%f",&x1);
    printf("\n\t\t yA = ");
    scanf("%f",&y1);
    printf("Les coordonnees du point B: \n \t\t xB = ");
    scanf("%f",&x2);
    printf("\n\t\t yA = ");
    scanf("%f",&y2);
    
    if(((y2-y1)/(x2-x1)) <= 0 || ((y2-y1)/(x2-x1)) >= 1){
        goto Reprise;
    }

    trace_segment_naif((int)x1,(int)y1,(int)x2,(int)y2);
    
    system("pause"); 
    return 0;
}

/* void algorithme(float *xa, float *xb, float *ya, float *yb, SDL_Renderer *rendu){
    float a = ((*yb - *ya)/(*xb - *xa));
    float dx = *xb-*xa, inter=0.0, result=0.0;
    float yk = *yb, y0 = *ya;
    float tabk[(int)dx];
    tabk[0] = *xa;

    for(int k = 0; k < (int)dx; k++){
        tabk[k+1] = tabk[k]+1;
        inter = tabk[k+1];
        result = f(inter,a,*xa,y0);

        if((result-yk) >= 0.5){
            if(SDL_SetRenderDrawColor(rendu,0,2,224,SDL_ALPHA_OPAQUE) != 0){
                fprintf(stderr,"Impossible de changer la couleur pour le rendu");
            }

            if(SDL_RenderDrawPoint(rendu,(int)tabk[k+1],(int)(yk+1)) != 0){
                fprintf(stderr,"Impossible de dessiner une ligne");
            }
        }else{
            if(SDL_SetRenderDrawColor(rendu,30,132,114,SDL_ALPHA_OPAQUE) != 0){
                fprintf(stderr,"Impossible de changer la couleur pour le rendu");
            }

            if(SDL_RenderDrawPoint(rendu,(int)tabk[k+1],(int)(yk)) != 0){
                fprintf(stderr,"Impossible de dessiner une ligne");
            }
        }
    }
}

float f(float inter, float a, float xa, float y0){
    return a*((inter-1)-xa)+y0;
} */

int arrondit(float x){
    int resultat=(int)x;
    if(x-resultat >= 0.5){
        resultat++;
    }
    return resultat;
}

void trace_segment_naif(int xa, int xb, int ya, int yb){
   
    int x = xa;
    int y = ya;
    int i;
    float a = ((float)ya-yb)/(xa-xb);
    float b = ya - a*xa;
    SDL_Window *window = NULL;
    SDL_Renderer *rendu = NULL;
    float x1,x2,y1,y2;
    
    if(SDL_Init(SDL_INIT_VIDEO) != 0){
        fprintf(stderr, "Erreur SDL_Init: %s",SDL_GetError());
        goto Quit;
    }

    window = SDL_CreateWindow("La fenetre graphique SDL",SDL_WINDOWPOS_CENTERED,SDL_WINDOWPOS_CENTERED,600,600,SDL_WINDOW_SHOWN);
    rendu = SDL_CreateRenderer(window,-1,SDL_RENDERER_SOFTWARE);
    if(window == NULL){
        fprintf(stderr,"Erreur SDL_CreateWindow: %s",SDL_GetError());
        goto Quit;
    }
    if(rendu == NULL){
        fprintf(stderr,"Erreur SDL_CreateRenderer: %s",SDL_GetError());
        goto Quit;
    }

    if(SDL_SetRenderDrawColor(rendu,255,255,254,SDL_ALPHA_OPAQUE) != 0){
        fprintf(stderr,"Impossible de changer la couleur pour le rendu");
        goto Quit;
    }

    if(SDL_RenderDrawLine(rendu,xa,ya,xb,yb) != 0){
        fprintf(stderr,"Impossible de dessiner une ligne");
        goto Quit;
    }

    for(i=0;i<xb-xa;i++){
        x++;
        y = arrondit(a*x+b);
         if(SDL_SetRenderDrawColor(rendu,30,132,114,SDL_ALPHA_OPAQUE) != 0){
            fprintf(stderr,"Impossible de changer la couleur pour le rendu");
        }
        if(SDL_RenderDrawPoint(rendu,x,y) != 0){
            fprintf(stderr,"Impossible de dessiner une ligne");
        }

    }
    

    // algorithme(&x1,&x2,&y1,&y2,rendu);

    SDL_RenderPresent(rendu);
    SDL_Delay(15000);

Quit : 
    SDL_DestroyRenderer(rendu);
    SDL_DestroyWindow(window);
    SDL_Quit();
}