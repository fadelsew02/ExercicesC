#include<stdio.h>

int main(void)
{

    int n1, n2;
    int res = 0;

    printf("\n\nTableau 1 \n\tTaille:\t");
    scanf("%d", &n1);
    int tab1[n1];
    printf("\n\tElements du Tableau\n");
    for (int i = 0; i < n1; i++)
    {
        printf("\t\tElement %d\t", i + 1);
        scanf("%d", &tab1[i]);
    }
    
    printf("\nTableau 2 \n\tTaille:\t");
    scanf("%d", &n2) ;
    int tab2[n2];
    printf("\n\tElements du Tableau 2\n");
    for (int i = 0; i < n2; i++)
    {
        printf("\t\tElement %d\t", i + 1);
        scanf("%d", &tab2[i]);
    }
    

    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            res += tab1[i]*tab2[j];
        }
    }

    printf("\nLe schtrompf des deux tableaux est %d\n\n", res);
        
    return 0;
}