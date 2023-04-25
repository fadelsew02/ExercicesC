#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	int tab[6];
	int t[6] = {0};
	int de = 1;
	int fait = 0, sept = 0;
	printf("Entrez six (06) entiers:\n\t");
	for (int i = 0; i < 6; i++){
		scanf("%d",&t[i]);
		printf("\n\t");
	}

	int a = 0;
	for(int i = 0; i < 6; i++){
		de = 1;
		for(int j = i+1; j < 6; j++){
			if(t[i] == t[j]){
				de = 0;
				break;
			}else{
				de = 1;
			}
		}
		if(de == 1){
			tab[a] = t[i];
			a++;
		}
	}


	for (int i = 0; i < a; ++i)
	{
		printf("%d  ",tab[i]);
	}

		printf("Entrez le septi%cme entier: \t",138);
	scanf("%d",&sept);

	printf("\ttab = ");
	printf("{");
	for (int i = 0; i < 6; ++i){
		printf("%d",t[i]);
		if(i < 5){
			printf(",");
		}
	}
	printf("}\n\n");

	printf("\tCouples :");
	for (int i = 0; i < a; ++i){
		for (int j = 0; j < a; ++j){
			if(sept == tab[i]+tab[j]){
				fait = 0;
				printf("\t");
				printf("{%d,%d}",tab[i],tab[j]);
			}	
		}
	}
	if(fait == 1){
		printf("N%cant",130);
	}
	return 0;
}