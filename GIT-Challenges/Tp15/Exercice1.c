#include<stdio.h>
#include<stdlib.h>

int main(void){
    /* 
        Appliquons l'algorithme aux entiers a=57 et b=11
        q = 0;
        r = 57;
        1ere itération:
            q=1;  On augmente le quotient de 1
            r=57-11 => r = 46  On retranche au reste initial la valeur du diviseur
        2e itération:
            q=2;   On augmente la valeur du quotient de 1
            r=46-11 => r=35;  On retranche du reste la valeur du diviseur
        3e itération:
            q=3;
            r=35-11 => r=24;
        4e itération:
            q=4;
            r=24-11 => r=13;
        5e itération:
            q=5;
            r=13-11 => r=2;
        On a reitéré les instructions énoncées à la premiere et deuxieme itération.
        Fin des itérations
     * 
        Alors  57 = 11*5 + 2;                                                                                                               
     */
    return 0;
}