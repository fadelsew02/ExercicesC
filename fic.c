#include <stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[]){
	
	FILE *fic = fopen("texte.txt", "r");
	int letter = 0;
	
	if (fic == NULL){
		exit(1);
	}

	while(1){
		letter = fgetc(fic);
		if(feof(fic)){
			break;
		}

		printf("%c",letter);
	}


	fclose(fic);
	return 0;
}