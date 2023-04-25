/* 
    Programme servant à l'horodatage du 01/01/1970 à aujourd'hui
    Ce 12 Avril 2022
    L'utilisateur pourra entrer la date sous différents formats
    Auteurs:
        AVOHOU Prince Boris
        SEWADE Mahougnon Fadel
        SEWADE Mahoussé Peniel

 */

#include<stdio.h>
#include<stdlib.h>

int bissextile(int);

int main(void)
{
    int redo = 1;
    do {
        printf("\n=========================================================================================");
        unsigned int jour = 0, mois = 0, annee = 0, nbreAnnee = 0, nbreAnneeBis = 0;
        unsigned int nbreJours = 0,
                     temps = 0,
                     m = 0,
                     format;

        printf("\nLes differents formats de date possible a entrer :\n\t"
                "1. dd/mm/yyyy\n\t"
                "2. mm/dd/yyyy\n\t"
                "3. dd-mm-yyyy\n\t"
                "4. mm-dd-yyyy\n\t"
                "5. dd.mm.yyyy\n\t"
                "6. mm.dd.yyyy\n\t"
                "7. ddmmyyyy\n\t"
                "8. mmddyyyy\n\n"
                );
        printf("\nQuel format voulez-vous utiliser ?");
        do{
            printf("\n\tChoix :\t");
            scanf("%d", &format);
        } while(format<1 || format>8);

        printf("\nEntrez la date :\t"); //On récupère la date dans l'ordre suivant:Jour, Mois, Annee

        switch(format) {
            case 1:
                scanf("%d/%d/%d", &jour, &mois, &annee);
                break;
            case 2:
                scanf("%d/%d/%d", &mois, &jour, &annee);
                break;
            case 3:
                scanf("%d-%d-%d", &jour, &mois, &annee);
                break;
            case 4:
                scanf("%d-%d-%d", &mois, &jour, &annee);
                break;
            case 5:
                scanf("%d.%d.%d", &jour, &mois, &annee);
                break;
            case 6:
                scanf("%d.%d.%d", &mois, &jour, &annee);
                break;
            case 7:
                scanf("%d", &format);
                annee = format % 10000;
                mois = (format % 1000000-annee)/10000;
                jour = format / 1000000;
                break;
            case 8:
                scanf("%d", &format);
                annee = format % 10000;
                jour = (format % 1000000-annee)/10000;
                mois = format / 1000000;
                break;
        }

        nbreAnnee = annee - 1970; //On récupère le nombre entre la référence(1970) et l'année entrée
        nbreAnneeBis = nbreAnnee / 4; //On détermine ainsi le nombre d'année bissextile entre 1970 et l'année entrée

        nbreJours = nbreAnnee*365 + nbreAnneeBis; //Calcul du nombre de jours écoulés entre le 01/01/1970 et le 01/01/année

        if(mois <= 2)
            nbreJours += 31*(mois-1)+(jour-1);

        if(mois > 2)
        {
            nbreJours += 28 + 31 + bissextile(annee);
            printf("\n%d",nbreJours);
            for(int i = 1; i < mois-2; i++)
            {
                nbreJours += 30;
            }
            nbreJours += jour-1;
            m = (mois == 9) ? 1:0; 
            nbreJours += ((mois - 2)/2 + m);

        }

        temps = 86400*(nbreJours) ;
        printf("\nL'horodatage de votre date est %d \n",temps);

        do {
            printf("\n========================================================================================="
                   "\nReprendre ?\t1- Oui\t0- Non\n"
                   );
            scanf("%d", &redo);
        } while (redo != 1 && redo != 0);

    } while (redo);

    printf("\nBye Bye !!\n=========================================================================================");


    return 0;
}

/* ------------------------------------------------------------------------------------------------------- */

int bissextile(int a)
{
    if((a%4 == 0 && a%100 != 0) || (a % 400 == 0))
        return 1;
    
    return 0;
}