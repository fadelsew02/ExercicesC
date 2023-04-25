#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char const *argv[])
{
	int tab1[1000] = {0};
	int ent = 0, a = 0;
	char carac[10];
	
	printf("Entrez le nombre de nombres que vous souhaitez entrés\n");
	scanf("%d",&a);
	int liste[a];
	for (int i = 0; i < a; ++i){
		scanf("%d",&liste[i]);
		printf("detf\n");
	}
	return 0;
}