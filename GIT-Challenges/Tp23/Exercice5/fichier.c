#include <stdio.h>
#include <stdlib.h>

#include "fichier.h"

void affiche_partition(t_partition p){
    int i=-1;
    while(1){
        i++;
        if(p.tab[i+1] != 0){
            printf("%2d + ",p.tab[i]);
        }else{
            if(i == 0){
                printf(" %d",p.tab[i]);
            }else{
                printf(" ,%d",p.tab[i]);
            }
        }
        if(p.tab[i] == 0){
            break;
        }
    }
    printf("\n");
}

void copie_partition(t_partition p, t_partition* copie){
    (*copie).val = p.val;
    int i=0;

    while(p.tab[i] != 0){
        (*copie).tab[i] = p.tab[i];
    }
}

int compare_partitions(t_partition p1, t_partition p2){
    for(int i=0; i<L_MAX; i++){
        if(p1.tab[i] > p2.tab[i]){
            return 1;
        }else if(p1.tab[i] < p2.tab[i]){
            return -1;
        }
    }
    return 0;
}

void calcule_partition_courte(int n, t_partition *p){
    (*p).val = n;
    (*p).tab[0] = n;
    (*p).tab[1] = 0;
}