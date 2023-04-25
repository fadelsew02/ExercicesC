#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
    int a = 0, b = 0, c = 0;
    int min = 0, max = 0;

    printf("Entrez trois valeurs enti%cres :\n\t",138);
    for (int i = 0; i < 3; ++i)
    {
        printf("Nombre %d:",i+1);
        printf("\t");
        if(i == 0){
            scanf("%d",&a);
        }else if(i == 1){
            scanf("%d",&b);
        }else if(i == 2){
            scanf("%d",&c);
        }
        printf("\n\t");
    }

    min = a;
    max = a;

    if(b < min){
        min = b;
    }else if(b > max){
        max = b;
    }
    if(c < min){
        min = c;
    }else if(c > max){
        max = c;
    }

    printf("Le minimum est %d et le maximum est %d",min,max);

    return EXIT_SUCCESS;
}