#ifndef __FICHIER__H__
#define __FICHIER__H__

#define L_MAX 12

typedef struct{
    int val;
    int tab[L_MAX+1];
}t_partition;

void affiche_partition(t_partition p);
void copie_partition(t_partition p, t_partition* copie);
int compare_partitions(t_partition p1, t_partition p2);
void calcule_partition_courte(int n, t_partition *p);
void calcule_partition_longue(int n, t_partition *p);

#endif  //__FICHIER__H__

