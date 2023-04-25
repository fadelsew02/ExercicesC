#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#include <math.h>
#include <SDL.h>

void trace_segment_bresenham1(int xa, int ya, int xb, int yb);
void algorithme(float *xa, float *xb, float *ya, float *yb, SDL_Renderer *rendu);

int main(int argc, char **argv){
    float x1, y1, x2, y2;

    printf("Entrez les coordonnees des deux points A et B(coordonnees pouvant a 600) :\n\n");
    printf("Les coordonnees du point A: \n \t\t xA = ");
    scanf("%f",&x1);
    printf("\n\t\t yA = ");
    scanf("%f",&y1);
    printf("Les coordonnees du point B: \n \t\t xB = ");
    scanf("%f",&x2);
    printf("\n\t\t yA = ");
    scanf("%f",&y2);
    
    trace_segment_bresenham1((int)x1,(int)y1,(int)x2,(int)y2);
    
    system("pause"); 
    return 0;
}

void algorithme(float *xa, float *xb, float *ya, float *yb, SDL_Renderer *rendu){
    int dx = (int)*xb-(int)*xa;
    int dy = (int)*yb-(int)*ya;
    int yk = (int)*yb;
    int dk[dx];
    int tabk[dx];

    dx = abs(dx);
    dy = abs(dy);

    tabk[0] = (int)*xa;
    if(dy <= dx){
        dk[0] = 2*dy - dx;
        for(int k = 0; k < dx; k++){
            tabk[k+1]=tabk[k]+1;
            if(dk[k] < 0){
                dk[k+1] = dk[k] + 2*dy;
                if(SDL_SetRenderDrawColor(rendu,30,132,114,SDL_ALPHA_OPAQUE) != 0){
                    fprintf(stderr,"Impossible de changer la couleur pour le rendu");
                }

                SDL_Rect carre;
                carre.x=tabk[k+1];
                carre.y=yk;
                carre.w=40;
                carre.h=40;
                if(SDL_RenderDrawRect(rendu,&carre) != 0){
                    fprintf(stderr,"Impossible de dessiner une ligne");
                }
            }else{
                yk++;
                dk[k+1] = dk[k]+2*(dy - dx);
                if(SDL_SetRenderDrawColor(rendu,0,2,224,SDL_ALPHA_OPAQUE) != 0){
                    fprintf(stderr,"Impossible de changer la couleur pour le rendu");
                }
                SDL_Rect carre;
                carre.x=tabk[k+1];
                carre.y=yk;
                carre.w=40;
                carre.h=40;
                if(SDL_RenderDrawRect(rendu,&carre) != 0){
                    fprintf(stderr,"Impossible de dessiner une ligne");
                }
            }
        }
    }else{
        dk[0] = 2*dx - dy;
        for(int k = 0; k < dy; k++){
            tabk[k+1]=tabk[k]+1;
            if(dk[k] < 0){
                dk[k+1] = dk[k] + 2*dx;
                if(SDL_SetRenderDrawColor(rendu,30,132,114,SDL_ALPHA_OPAQUE) != 0){
                    fprintf(stderr,"Impossible de changer la couleur pour le rendu");
                }
                SDL_Rect carre;
                carre.x=tabk[k+1];
                carre.y=yk;
                carre.w=40;
                carre.h=40;
                if(SDL_RenderDrawRect(rendu,&carre) != 0){
                    fprintf(stderr,"Impossible de dessiner une ligne");
                }
            }else{
                yk++;
                dk[k+1] = dk[k]+2*(dx - dy);
                if(SDL_SetRenderDrawColor(rendu,0,2,224,SDL_ALPHA_OPAQUE) != 0){
                    fprintf(stderr,"Impossible de changer la couleur pour le rendu");
                }
                SDL_Rect carre;
                carre.x=tabk[k+1];
                carre.y=yk;
                carre.w=40;
                carre.h=40;
                if(SDL_RenderDrawRect(rendu,&carre) != 0){
                    fprintf(stderr,"Impossible de dessiner une ligne");
                }
            }
        }
    }  

    SDL_RenderPresent(rendu);
}

void trace_segment_bresenham1(int xa, int xb, int ya, int yb){
   
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

    algorithme(&x1,&x2,&y1,&y2,rendu);

    SDL_RenderPresent(rendu);
    SDL_Delay(15000);

Quit : 
    SDL_DestroyRenderer(rendu);
    SDL_DestroyWindow(window);
    SDL_Quit();
}