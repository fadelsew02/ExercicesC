#include<stdio.h>
#include<stdlib.h>

int main(int argc, char **argv){
    int a=0, b=0, c=0;
    int max = 0;

    printf("Entrez les valeurs de a, b et c");
    scanf("%d %d %d",&a,&b,&c);
    system("cls");
    printf("Entrez les valeurs de a, b et c (sous la forme a:b:c): %d:%d:%d \n",a,b,c);
    max = a;
    if(b>max){
        max = b;
    }
    if(c>max){
        max = c;
    }
    printf("Le plus grand des entiers est: %d \n",max);
    
    system("pause");
    return EXIT_SUCCESS;
}