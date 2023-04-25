#include<stdio.h>
#include<stdlib.h>

int	main(int argc, char **argv){
    int n = 2, s= 0;

    for(int i = 0; i < 9; i++){
        s=0;
        for(int j = 1; j <= n; j++){
            s = s+j;
            if(j==n){
                printf("%d",j);
            }else{
                printf("%d + ",j);
            }
        }
        printf(" = %d",s);
        printf("\n");
        n++;
    }
    printf("\n\n");
    system("pause");
    return 0;
}
