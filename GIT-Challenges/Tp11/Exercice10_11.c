#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int calcule_racines(float a, float b, float c, float *r1, float *r2, float *r0);
int	main(int argc, char **argv){
    float a = 0.0, b = 0.0, c = 0.0;
    float r1 = 0.0, r2 = 0.0, r0=0.0;
    int code = 0;
    printf("Entrez les valeurs pour a, b et c : coefficients de votre equation:");
    scanf("%f %f %f",&a,&b,&c);
    code = calcule_racines(a,b,c,&r1,&r2,&r0);
    affiche_racines(a,b,c);
    system("pause");
    return 0;
}

int calcule_racines(float a, float b, float c, float *r1, float *r2, float *r0){
    int code = 0;
    float delta=0.0;
    delta = pow(b,2)-4*a*c;
    if(delta < 0){
        code = 0;
    }else if(delta == 0){
        code = 1;
        *r0 = -(b/2*a);
    }else{
        code = 2;
        *r1 = ((-b-sqrt(delta))/2*a);
        *r2 = ((-b+sqrt(delta))/2*a);
    }
    return code;
}


void affiche_racines(float a, float b, float c){
    float r1,r2,r0;
    int code = calcule_racines(a,b,c,&r1,&r2,&r0);
    printf("Traitement du polynome (%.4f)x^2 + (%.4f)x + (%.4f) = 0",a,b,c);
    if(code == 0){
        printf("Il n'existe aucune racine reelle pour ce polynome\n");
    }else if(code == 1){
        printf("Il n'existe qu'une seule racine reelle pour ce polynome: r = %.4f \n",r0);
    }else{
        printf("Il existe deux racines relles distinctes pour ce polynome: r1 = %.4f et r2 = %.4f \n",r1,r2);
    }

}