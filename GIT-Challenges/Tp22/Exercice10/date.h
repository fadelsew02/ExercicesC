#ifndef __DATE__H__
#define __DATE__H__

typedef enum{
    jan = 1,
    fev = 2,
    mars = 3,
    avr = 4,
    mai = 5,
    juin = 6,
    juil = 7,
    aout = 8,
    sept = 9,
    oct = 10,
    nov = 11,
    dec = 12,
}t_mois;

typedef struct{
    int jour;
    t_mois mois;
    int an;
}t_date;

void affiche_mois(t_mois m);
void affiche_date();
t_date saisis_date();


#endif  //__DATE__H__
