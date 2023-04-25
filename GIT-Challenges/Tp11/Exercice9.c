#include <stdio.h>
#include <stdlib.h>
#include<math.h>

void division_entiere(int x, int y, int *r, int *quot);

int	main(int argc, char **argv){
    int x=0, y=0;
    int reste = 0, quotient = 0;
    
    printf("Entrez deux valeurs entieres:\t");
    scanf("%d %d",&x,&y);
    division_entiere(x,y,&reste,&quotient);
    printf(" Le quotient est %d, le reste est: %d \n",quotient,reste);
    system("pause");
    return 0;
}

void division_entiere(int x, int y, int *reste, int *quotient){
    *quotient = x/y;
    *reste = x%y;
}
