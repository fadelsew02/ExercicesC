#ifndef __FICHIER__H__
#define __FICHIER__H__

#define L_MAX 5

typedef struct{
    int val;
    int tab[L_MAX];
}t_partition;

void affiche_partition(t_partition p);
void copie_partition(t_partition p, t_partition* copie);

#endif  //__DATE__H__
