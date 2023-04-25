#include<stdio.h>
#include<stdlib.h>

#include "fichier.h"

int main(int argc, char **argv){
    
    t_partition p1 = {12,{4,4,3,1,0}};
    t_partition p2 = {12,{5,4,3,0}};
    t_partition p3 = {12,{12,0}};
    t_partition p;
    int n;

    printf("Entrez une valeur pour n: ");
    scanf("%d",&n);

    calcule_partition_longue(n, &p);
    affiche_partition(p);

    system("pause");
    return EXIT_SUCCESS;
}