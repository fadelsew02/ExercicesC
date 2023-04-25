#include <stdio.h>
#include <stdlib.h>
#include <SDL.h>

Uint8 seuil(int x, int y);

int main(int argc, char **argv){
    int a,b;
    Uint8 pixel;
    scanf("%d %d",&a,&b);
    pixel = seui(a,b);
    system("pause");
    return 0;
}

Uint8 seuil(int x, int y){
    Uint8 result = x+y;
    if(result < 0){
        return 0;
    }else if(result > 255){
        return 255;
    }else{
        return result;
    }
}
