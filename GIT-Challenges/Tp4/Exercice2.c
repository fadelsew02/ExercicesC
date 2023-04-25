/* -----------------Ce programme résoud les équations du second degré ax^2 + bx + c = 0-----------------*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(int argc, char **argv[])
{
    float a = 0.0, b = 0.0, c = 0.0, det = 0.0, rac1 = 0.0, rac2 = 0.0;
    int coef = 97;

    printf("Entrez les coefficients a, b et c de votre %cquation\n",130);
    for(int i = 0; i < 3; i++){
        printf("\t %c  : ",coef);
        if(i == 0)
            scanf("%f",&a);
        else if(i == 1)
            scanf("%f",&b);
        else    
            scanf("%f",&c);  
        coef++;
    }

    det = pow(b,2) - 4*a*c;

    if(c == 0){
         printf("\n\t\tVotre %cquation est %4fx^2 + %4fx  = 0\n",130,a,b);
    }

    if(b == 0){
         printf("\n\t\tVotre %cquation est %4fx^2 + %4f = 0\n",130,a,c);
    }

    if(a != 0){
        printf("\n\t\tVotre %cquation est %4fx^2 + %4fx + %4f = 0\n",130,a,b,c);
        if(det < 0){
            printf("\n\tSolution dans IR = { }");
        }
        else if(det > 0){
            rac1 = (-b - sqrt(det))/2*a;
            rac2 = (-b + sqrt(det))/2*a;
            printf("Votre %cquation admet deux solutions r%celles distinctes que sont: \n"
                "\t\t   x1 = %f   et    x2 = %f \n",130,130,rac1,rac2);
        }
        else{
            printf("\n\tVotre %cquation admet une unique solution dans IR: %f",130,(-b /2*a));
        }
    }
    else{
        printf("\n\t\tVotre %cquation est: %4fx + %4f = 0\n",130,b,c);
        printf("Votre %cquation n'est pas de second degr%c.\nN%canmoins, la solution est:\n",130,130,130);
        printf(" %f",b/a);
    }
    printf("\n");
    system("pause");  
    return EXIT_SUCCESS;
}

