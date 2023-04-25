#include <stdio.h>
#include <stdlib.h>

#include "fichier.h"

void affiche_partition(t_partition p){
    int i=0;
    while(p.tab[i] != 0){
        if(p.tab[i+1] != 0){
            printf("%2d + ",p.tab[i]);
        }else{
            printf("%d",p.tab[i]);
        }
        i++;
    }
    printf("\n");
}