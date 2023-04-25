#include <stdio.h>
#include <stdlib.h>
#include<math.h>

float vabs(float x);

int	main(int argc, char **argv){
    float x=0.0;
    printf("Entrez une valeur reelle:\t");
    scanf("%f",&x);
    printf(" La valeur absolue de votre reel est: %f \n",vabs(x));
    system("pause");
    return 0;
}

float vabs(float x){
    return fabs(x);
}
