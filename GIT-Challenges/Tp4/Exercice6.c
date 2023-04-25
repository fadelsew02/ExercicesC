#include<stdio.h>
#include<stdlib.h>

int	main(int argc, char **argv){
    int n = 0, s= 0,i1=2;

    printf("Entrez n ou une valeur <=0 pour arreter:\t");
    scanf("%d",&n);
    if(n > 0){
        for(int i = 1; i < n; i++){
            s=0;
            for(int j = 1; j <= i1; j++){
                s = s+j;
                if(j==i1){
                    printf("%d",j);
                }else{
                    printf("%d + ",j);
                }
            }
            printf(" = %d",s);
            printf("\n");
            i1++;
        }
    }else{
        printf("Arret du programme");
        return EXIT_SUCCESS;
    }
    
    printf("\n\n");
    system("pause");
    return 0;
}
