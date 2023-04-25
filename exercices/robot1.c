#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define TRUE 1
#define FALSE 0

int main(int argc, char const *argv[])
{
/*
	typedef enum
	{
		FALSE;
		TRUE;
	}bool;*/
	struct noskip
	{
		int x;
		int y;
	};

	typedef struct noskip noskip;//On crée le type de variable noskip

/* -----------------On crée des variables de type noskip qui représente les coordonnées des pièges de la grille à éviter-------------------- */
    noskip case1 = {5,1}; 
	noskip case2 = {7,2};
	noskip case3 = {4,3};
	noskip case4 = {2,4};
	noskip case5 = {1,5};
	noskip case6 = {3,6};
	noskip case7 = {6,7};
	noskip case8 = {8,8};

	noskip tab[8]; //Un tableau tab[] contenant les coordonnées des pièges présents sur la grille
	/* ----On remplit notre tableau tab des coordonnées des pièges----- */
	tab[0] = case1;
	tab[1] = case2;
	tab[2] = case3;
	tab[3] = case4;
	tab[4] = case5;
	tab[5] = case6;
	tab[6] = case7;
	tab[7] = case8;

/* -------------les coordonnées des livres------------------- */
    noskip livre1 = {8,1}; 
	noskip livre2 = {2,2};
	noskip livre3 = {5,3};
	noskip livre4 = {3,4};
	noskip livre5 = {7,5};
	noskip livre6 = {1,6};
	noskip livre7 = {4,7};
	noskip livre8 = {6,8};

	noskip book[8];

	book[0] = livre1;
	book[1] = livre2;
    book[2] = livre3;
    book[3] = livre4;
    book[4] = livre5;
    book[5] = livre6;
    book[6] = livre7;
    book[7] = livre8;

	unsigned xr = 1, yr = 1;  //Coordonnées de départ du robot

    int tab1[8];
    int peux = 1;
	int xl = 0, yl = 0;  //Coordonnées du livre à rechercher
	while(peux){
		printf("Entrer les coordonn%ces du livre %c rechercher\n\t",130,131);
	    scanf("%d",&xl);
	    printf("\t");
	    scanf("%d",&yl);
		for(int i = 0; i < 8; i++){
			if(book[i].x == xl && book[i].y == yl)
				peux = 0;
		}
	}

	// for (int i = 0; i < 8; ++i)
	// {
	// 	printf("%d, %d\n",tab[i]);	
	// }
	int dpl = 0;
	
	unsigned int droite = 0, gauche = 0, haut = 0, bas = 0;
	int i = 0;

	while((xr != xl) || (yr != yl ) /*i < 8*/){		
		// /* --------------------vérification du déplacement vers la droite-------------------------- */
		int a = xr;
		int b = yr;
		b++;
		for(int i = 0; i < 8; i++){
			if((tab[i].x == a) && (tab[i].y == b)){
				droite = 0;
				break;
			}else{
				droite = 1;
			}
		}
		if(droite == 1 && b >= 9){
			droite = 0;
		}
	/* ----------------------Vérification du déplacement vers la gauche-------------------------- */
		a = xr;
		b = yr;
		b--;
		for(int i = 0; i < 8; i++){
			if((tab[i].x == a) && (tab[i].y == b)){
				gauche = 0;
				break;
			}else{
			    gauche = 1;
			}
		}
		if(gauche == 1 && b < 0){
			gauche = 0;
		}
		// /* -----------------------Vérification vers le haut----------------------------------------- */
		a = xr;
		b = yr;
		a++;
		for(int i = 0; i < 8; i++){
			if((tab[i].x == a) && (tab[i].y == b)){
				haut = 0;
				break;
			}else{
				haut = 1;
			}
		}
		if(haut == 1 && a >= 9 ){
			haut = 0;
		}
		// /* ------------------------Vérification vers le bas--------------------------------------- */
		a = xr;
		b = yr;
		a--;
		for(int i = 0; i < 8; i++){
			if((tab[i].x == a) && (tab[i].y == b)){
				bas = 0;
				break;
			}else{
				bas = 1;
			}
		}
		if(bas == 1 && a < 0){
			bas = 0;
		}
		/* --------------------------------Fin des vérifications--------------------------------------- */

		/*----------------- On remplit notre tableau tab1 des valeurs de droite, gauche, haut et bas------------*/
		tab1[0] = droite;
		tab1[1] = gauche;
		tab1[2] = haut;
		tab1[3] = bas;
		printf("%d %d %d %d \n",droite,gauche,haut,bas);

		if(xr <= xl && yr <= yl){
			if(droite == 1 && haut == 1){
				if((yl - yr) < (xl - xr) ){
					dpl = 0;
			    }else{
					dpl = 2;
				}
			}else if(droite == 0 && haut == 1){
				dpl = 2;
			}else if(droite == 1 && haut == 0){
				dpl = 0;
			}else if(droite == 0 && haut == 0){
				dpl = 1;
			}
		}

		if(xr <= xl && yr >= yl){
			if(gauche == 1 && haut == 1){
				if((xl - xr) < (yr - yl)){
					dpl = 2;
				}else{
					dpl = 1;
				}
			}else if(gauche == 0 && haut == 1){
				dpl = 2;
			}else if(gauche == 1 && haut == 0){
				dpl = 1;
			}
		}

		if(xr >= xl && yr <= yl){
			if(bas == 1 && droite == 1){
				if((xr - xl) < (yl - yr)){
					dpl = 3;
				}else{
					dpl = 0;
				}
			}else if(bas == 0 && droite == 1){
				dpl = 0;
			}else if(bas == 1 && droite == 0){
				dpl = 3;
			}
		}

		if(xr >= xl && yr >= yl){
			if(bas == 1 && gauche == 1){
				if((xr - xl) < (yr - yl)){
					dpl = 3;
				}else{
					dpl = 1;
				}
			}else if(bas == 0 && gauche == 1){
				dpl = 1;
			}else if(bas == 1 && gauche == 0){
				dpl = 3;
			}
		}

		//  a = 0;
		// for(int i = 0; i < 4; i++)
		// {
		// 	if(tab1[i] == 1){
		// 		a++;
		// 	}
		// }

		// int t[a];
		// int a1 = 0;
		// for(int i = 0; i < 4; i++){
		// 	if(tab1[i] == 1)
		// 	{
		// 		t[a1] = i;
		// 		a1++;
		// 	}
		// }
		
		// for(int i = 0; i < a; i++){
		// 	if(t[i] == 0 && yl > yr){
		// 		dpl = 0;
		// 		break
		// 	}
		// }
		// for(int i = 0; i < a1; i++){
		// 	printf("\t%d \n",t[i]);
		// }

		// int hasard = 1;

		// int dpl = 0;
		// while(hasard){
		// 	srand(time(NULL));
		//     dpl = (rand() % (4));
		// 	for(int i = 0; i < 4; i++){
		// 		if(dpl == t[i]){
		// 			hasard = 0;
		// 			break;
		// 		}
		// 	}
		// }

		// printf("Je %d",dpl);
		// if(xl > xr){
		// 	dpl = 1;
		// }else if(xl < xr){
		// 	dpl = 2;
		// }else 

		if(dpl == 0){
			yr++;
			printf("Droite\n");
			// printf("%d %d",xr,yr);
		}	
		else if(dpl == 1){
			yr--;
			printf("Gauche\n");
			// printf("%d %d",xr,yr);
		}
		else if(dpl == 2){
			xr++;
			printf("Haut\n");
			// printf("%d %d",xr,yr);
		}
		else if(dpl == 3){
			xr--;
			printf("Bas\n");
			// printf("%d %d",xr,yr);
		}
			
		
		// printf("%d",t[dpl]);
		//  int indice = t[dpl];
		// switch (tab1[indice])
		// {
		// 	case 0 : 
		// 		xr++;
		// 		printf("Droite \n");
		// 		break;
		// 	case 1 :
		// 		xr--;
		// 		printf("Gauche \n");
		// 		break;
		// 	case 2 :
		// 		yr++;
		// 		printf("Haut \n");
		// 		break;
		// 	case 3 :
		// 		yr--;
		// 		printf("Bas \n");
		// 		break;

		// }
	}
	return 0;
}
