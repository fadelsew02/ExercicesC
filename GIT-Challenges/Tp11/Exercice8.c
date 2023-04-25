#include <stdio.h>
#include <stdlib.h>
#include<math.h>

void distance(float x, float y, float *r);
float vabs(float x);

int	main(int argc, char **argv){
    float x=0.0, y=0.0;
    float res = 0.0;
    
    printf("Entrez deux valeurs reelles:\t");
    scanf("%f %f",&x,&y);
    distance(x,y,&res);
    printf(" La distance est: %f \n",res);
    system("pause");
    return 0;
}

float vabs(float x){
    return fabs(x);
}

void distance(float x, float y, float *res){
    *res = fabs(x-y);

}
