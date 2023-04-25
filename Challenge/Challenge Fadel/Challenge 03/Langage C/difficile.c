#include <stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
	int tab[6];
	int t[6];
	int sept = 0;
	int fait = 1;
	printf("Entrez six (06) entiers:\n\t");
	for (int i = 0; i < 6; i++){
		scanf("%d",&tab[i]);
		printf("\n\t");
	}
	int de = 0;
	int a = 0;

	for (int i = 0; i < 6; ++i){
		for (int j = i + 1; j < 6; ++j){
			if (tab[i] == tab[j]){
				de = 1;
				break;
			}
		}
		if (de == 0){
			t[a] = tab[i];
			a++;
		}
	}

	for (int i = 0; i < a; ++i)
	{
		printf("%d ",t[i]);
	}
	// printf("Entrez le septi%cme entier: \t",138);
	// scanf("%d",&sept);

	// printf("\ttab = ");
	// printf("{");
	// for (int i = 0; i < 6; ++i){
	// 	printf("%d",tab[i]);
	// 	if(i < 5){
	// 		printf(",");
	// 	}
	// }
	// printf("}\n\n");

	// printf("\tCouples :");
	// for (int i = 0; i < 6; ++i){
	// 	for (int j = 0; j < 6; ++j){
	// 		if(sept == t[i]+t[j]){
	// 			fait = 0;
	// 			printf("\t");
	// 			printf("{%d,%d}",t[i],t[j]);
	// 		}	
	// 	}
	// }
	// if(fait == 1){
	// 	printf("N%cant",130);
	// }
	return EXIT_SUCCESS;
}