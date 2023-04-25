#include<stdio.h>
#include <stdlib.h>
#include<math.h>

int	main(int argc, char **argv){

    int entier = 0, j = 0, diviseur = 0, quotient = 0;
    int reste = 0, nombreStart = 0;
    
    printf("Entrez un entier:\t");
    scanf("%d",&entier);

    reste = entier;
    int i = 1;
    while (quotient == 0 && nombreStart == 0){
        j = 11 -i;
        diviseur = pow(10,j);
        quotient = reste/diviseur;
        reste = reste % diviseur;
        i++;
        if(quotient != 0){
            nombreStart = 1;
            break;
        }
    }
    quotient = entier;
    j = j+1;
    if(nombreStart == 1){
        for(int i = 1; i <= j; i++){
            reste = quotient % 10;
            quotient = quotient / 10;
            printf("%d",reste);
        }
    }
    printf("\n\n");
    system("pause");
    return 0;
}
