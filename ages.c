#include <stdio.h>


int calculAge(int tab[]);

int main(void)
{
    char date[11];
    int tab[6], age;

    printf("Quelle date sommes-nous aujourd'hui ?\n\tNB : Entrer la date sous le format \"jj-mm-aaaa\"\n\tDate :\t");
    scanf("%s",&date);
    for (int i = 0; i < 7; i+=3)
    {
        int j = i/3;
        if (i == 6)
            tab[j+3] = 1000*(date[i] - 48 ) + 100*(date[i + 1] - 48) + 10*(date[i+2] - 48) + date[i+3] - 48;
        else
            tab[j+3] = 10*date[i] + date[i+1] - 528;
    }

    printf("Quelle est votre date de naissance ?\n\tNB : Entrer la date sous le format \"jj-mm-aaaa\"\n\tDate :\t");
    scanf("%s", &date);
    for (int i = 0; i < 7; i += 3)
    {
        int j = i / 3;
        if (i == 6)
            tab[j] = 1000 * (date[i] - 48) + 100 * (date[i + 1] - 48) + 10 * (date[i + 2] - 48) + date[i + 3] - 48;
        else
            tab[j] = 10 * date[i] + date[i + 1] - 528;
    }

    age = calculAge(tab);
    printf("\n%d annees se sont ecoulees depuis votre naissance", age);


}

int calculAge(int tab[6])
{
    int diffAnnee = tab[5] - tab[2];
    if (tab[1] > tab[4])
    {
        diffAnnee--;
    }
    else if (tab[1] == tab[4])
    {
        if (tab[0] > tab[3])
        {
            diffAnnee--;
        }
    }

    return diffAnnee;    
}