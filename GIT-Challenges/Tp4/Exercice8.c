#include<stdio.h>
#include<stdlib.h>

int	main(int argc, char **argv){
    int u0=0, u1=1, n=0;
    int s1=0, s2=0, s=0;
    double div=0.0;

    printf("Entrez la valeur de n:\t");
    scanf("%d",&n);

    s1 = u0;
    s2 = u1;
    for(int i=0; i<=n; i++){
        if(i == 0){
            printf("u%d = 0 \n",i);
        }else if (i == 1){
            printf("u%d = 1 \n",i);
        }else{
            s = s1+s2;
            div = (double)s /(double)s2;
            printf("u%d = %d \n",i,s);
            printf("u%d/u%d = %.15lf \n",i,i-1,div);
            s1 = s2;
            s2 = s;
            
        }
    }
    printf("\n\n");
    system("pause");
    return 0;
}
