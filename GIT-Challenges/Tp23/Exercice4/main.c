#include<stdio.h>
#include<stdlib.h>

#include "fichier.h"

int main(int argc, char **argv){
    
    t_partition p1 = {12,{4,4,3,1,0}};
    t_partition p2 = {12,{5,4,3,0}};
    t_partition p3 = {12,{12,0}};

    int ret = compare_partitions(p2,p2);
    printf("\n\n Le retour de la fonction est %d \n\n",ret);

    system("pause");
    return EXIT_SUCCESS;
}