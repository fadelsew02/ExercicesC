#include <stdio.h>
#include <stdlib.h>
#include <SDL.h>
#include <time.h>

Uint8 seuil(int x, int y);

Uint32 obtenirPixel(SDL_Surface *image, int x, int y){
    int nbOctetsParPixel = image->format->BytesPerPixel;
    Uint8 *p = (Uint8 *)image->pixels + y*image->pitch + x*nbOctetsParPixel;

    switch (nbOctetsParPixel)
    {
        case 1:
            return *p;
        case 2:
            return *(Uint16 *)p;
        case 3: /* Suivant l'archiyecture de la machine */
           if(SDL_BYTEORDER == SDL_BIG_ENDIAN)
                return p[0] << 16 | p[1] << 8 | p[2];
            else
                return p[0] | p[1] << 8 | p[2] << 16;
        case 4:
            return *(Uint32 *)p;
        default:
            return 0;
    }
} 

/* -------------------------------------------------------------------------- */
/* definirPixel: permet de modifier la couleur d'un pixel
        Paramètres d'entrées: SDL_Surface *surface: la surface sur laquelle on va modifier la couleur du pixel
        int x, y: Coordonnées en x et en y du pixel à modifier
        Uint32 pixel: le pixel à insérer
 */

void definirPixel(SDL_Surface *surface, int x, int y, Uint32 pixel){
    int nbOctetsParPixel = surface->format->BytesPerPixel;
    Uint8 *p = (Uint8*)surface->pixels + y*surface->pitch + x*nbOctetsParPixel;

    switch (nbOctetsParPixel)
    {
        case 1:
            *p = pixel;
            break;
        case 2:
            *(Uint16 *)p = pixel;
            break;
        case 3: /* Suivant l'archiyecture de la machine */
           if(SDL_BYTEORDER == SDL_BIG_ENDIAN){
                p[0] = (pixel >> 16) & 0xff;
                p[1] = (pixel >> 8) & 0xff;
                p[2] = pixel & 0xff;
            }
            else{
                p[0] = pixel & 0xff;
                p[1] = (pixel >> 8) & 0xff;
                p[2] = (pixel >> 16) & 0xff;
            }
            break;
        case 4:
            *(Uint32 *)p = pixel;
            break;
    }
} 


int main(int argc, char **argv){
    
    SDL_Window *window = NULL;
    SDL_Renderer *renderer = NULL;
    SDL_Surface *image = NULL;
    SDL_Texture *texture = NULL;
    SDL_Texture *texture2 = NULL;
    SDL_Surface *surface = NULL;

    int statut = EXIT_FAILURE;

    image = SDL_LoadBMP("photo_out.bmp");
    if(image == NULL){
        fprintf(stderr,"Erreur lors du chargement de l'image: %s",SDL_GetError());
        goto Quit;
    }

    surface = SDL_LoadBMP("photo_out.bmp");
    if(surface == NULL){
        fprintf(stderr,"Erreur lors du chargement de l'image: %s",SDL_GetError());
        goto Quit;
    }

    if(SDL_Init(SDL_INIT_VIDEO) != 0){
        fprintf(stderr, "Erreur SDL_Init: %s",SDL_GetError());
        goto Quit;
    }

    window = SDL_CreateWindow("La fenetre graphique SDL",SDL_WINDOWPOS_CENTERED,SDL_WINDOWPOS_CENTERED,826,734,SDL_WINDOW_SHOWN);
    renderer = SDL_CreateRenderer(window,-1,SDL_RENDERER_SOFTWARE);

    if(window == NULL){
        fprintf(stderr,"Erreur SDL_CreateWindow: %s",SDL_GetError());
        goto Quit;
    }
    if(renderer == NULL){
        fprintf(stderr,"Erreur SDL_CreateRenderer: %s",SDL_GetError());
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


    int x, y;
    SDL_PixelFormat *format;
    Uint32 pixel;
    Uint8 r,g,b,a,gris;
    int delta_r,delta_g,delta_b;
    
    SDL_LockSurface(surface);
    // srand(time(NULL));
    for (x = 0; x < surface->w; x++){
        for(y = 0; y < surface->h; y++){
            pixel = obtenirPixel(surface,x,y);
            SDL_GetRGB(pixel, surface->format, &r,&g,&b); 
            srand(time(NULL));
            delta_r = 1+rand()%10;
            delta_g = 1+rand()%10;
            delta_b = 1+rand()%10;
            pixel = SDL_MapRGB(surface->format,seuil(delta_r,(int)r),seuil(delta_g,(int)g),seuil(delta_b,(int)b)); 
            // pixel = SDL_MapRGB(surface->format,r+100,g,b);
            definirPixel(surface,x,y,pixel);
        }

        /* 
            Pour (100,100,100) l'image est totalement grisée
            Pour (-100,-100,-100), l'image se noircit considérablement
         */
    }

    SDL_UnlockSurface(surface);
    texture2 = SDL_CreateTextureFromSurface(renderer, surface);
    if(texture2 == NULL){
        fprintf(stderr,"Erreur SDL_CreateTexture2FromSurface: %s",SDL_GetError());
        goto Quit;
    } 

      SDL_Rect rect;
    if(SDL_QueryTexture(texture2, NULL, NULL, &rect.w, &rect.h) != 0){
        fprintf(stderr, "Erreur SDL_QueryTexture: %s",SDL_GetError());
        goto Quit;
    }  

    rect.x = 413;
    rect.y = 0;
   if(SDL_RenderCopy(renderer, texture2, NULL,&rect) != 0){
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

Uint8 seuil(int x, int y){
    Uint8 result ;
    if(x+y < 0){
        result = 0;
    }else if(x+y > 255){
        result = 255;
    }else{
        result = x+y;
    }
    return result;
}
