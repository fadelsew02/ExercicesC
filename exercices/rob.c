#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(int argc, char **argv[])
{
    int xlivre[8] = {1,2,3,4,5,6,7,8};
    int ylivre[8] = {8,2,5,3,7,1,4,6};

    int ypiege[8] = {5,7,4,2,1,3,6,8};
    int xpiege[8] = {1,2,3,4,5,6,7,8};

    int possible[4];
    int peux = 1;
    int cont = 1;
    int xr = 1, yr = 1;
    int xl = 0, yl = 0;
    int dpl = 0;
    int s = 0;


    while(peux){
		printf("Entrer les coordonn%ces du livre %c rechercher\n\t",130,131);
	    scanf("%d",&xl);
	    printf("\t");
	    scanf("%d",&yl);
		for(int i = 0; i < 8; i++){
			if(xlivre[i] == xl && ylivre[i] == yl)
				peux = 0;
		}
	}

    int droite = 0, haut = 0, bas = 0, gauche = 0;

    while(cont){
        int a = xr;
		int b = yr;
		a++;
		for(int i = 0; i < 8; i++){
			if((xpiege[i] == a) && (ypiege[i] == b)){
				droite = 0;
				break;
			}else{
				droite = 1;
			}
		}
        if(droite == 1 && a >= 9)
            droite = 0;

        a = xr;
        b = yr;
        a--;
        for(int i = 0; i < 8; i++){
			if((xpiege[i] == a) && (ypiege[i] == b)){
				gauche = 0;
				break;
			}else{
				gauche = 1;
			}
		}
        if(gauche == 1 && a <= 0)
            gauche = 0;

        a = xr;
        b = yr;
        b++;
        for(int i = 0; i < 8; i++){
			if((xpiege[i] == a) && (ypiege[i] == b)){
				haut = 0;
				break;
			}else{
				haut = 1;
			}
		}
        if(haut == 1 && b >= 9)
            haut = 0;

        a = xr;
        b = yr;
        b--;
        for(int i = 0; i < 8; i++){
			if((xpiege[i] == a) && (ypiege[i] == b)){
				bas = 0;
				break;
			}else{
				bas = 1;
			}
		}
        if(bas == 1 && b <= 0)
            bas = 0;

        possible[0] = droite;
        possible[1] = gauche;
        possible[2] = haut;
        possible[3] = bas;

        if(abs(yl - yr) <= abs(xl - xr)){
            if((xl - xr) > 0){
                if(droite == 1 && s != 1){
                    dpl = 0;
                }else{
                    s++;
                    dpl = 1;
                    if(haut == 1 || (s == 2 || s == 3)){
                        dpl = 2;
                    }else if(bas == 1){
                        dpl = 3;
                    }
                }
            }else if((xl - xr) < 0){
                if(gauche == 1){
                    dpl = 1;
                }else{
                    dpl = 0;
                }
            }
        }else if(abs(yl - yr) > abs(xl - xr)){
            if((yl - yr) > 0){
                if(haut == 1){
                    dpl = 2;
                }else{
                    if(gauche == 1){
                        dpl = 1;
                    }else if(droite == 1){
                        dpl = 0;
                    }
                    
                }
            }else if((yl - yr) < 0){
                if(bas == 1){
                    dpl = 3;
                }else{
                    dpl = 2;
                }
            }
        }

        if(dpl == 0){
			xr++;
			printf("Droite\n");
			// printf("%d %d",xr,yr);
		}	
		else if(dpl == 1){
			xr--;
			printf("Gauche\n");
			// printf("%d %d",xr,yr);
		}
		else if(dpl == 2){
			yr++;
			printf("Haut\n");
			// printf("%d %d",xr,yr);
		}
		else if(dpl == 3){
			yr--;
			printf("Bas\n");
			// printf("%d %d",xr,yr);
		}




        if((xr == xl) && (yr == yl)){
            cont = 0;
        }
    }

    return EXIT_SUCCESS;
}