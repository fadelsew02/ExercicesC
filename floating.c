/* 
    Ce programme lit des nombres à virgules au clavier et les classe 
    dans les sous-intervalles de l'intervalle [0,1] suivants: [0.0,0.2], [0.2, 0.4]....[0.8,1.0]

    Auteurs : AVOHOU Prince, SEWADE Peniel, SEWADE Fadel
    13/04/2022
 */
#include <stdio.h>
#include <string.h>

 int main() {
    char liste[500];
    unsigned int nVirgule = 0,
                 comptPosVirgule = 0;
                
    
    printf("Entrez les nombres de la liste.\nVeillez à les séparer par des virgules");
    scanf("%s", liste);

    for(int i=0; i<strlen(liste); i++) {
        if (liste[i] == ','){
            nVirgule++;
        }
        
    }
    unsigned int [nVirgule] posVirgule ;
    for(int i=0; i<strlen(liste); i++) {
        if (liste[i] == ','){
            posVirgule[comptPosVirgule++] = i;
        }
        
    }
    char *nombres[nVirgule+1] , m= 0 ;
    return 0;
}