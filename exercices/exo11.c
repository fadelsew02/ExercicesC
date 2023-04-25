#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int t[20];
	int i=0;
	for(i=0 ; i<20 ; i++)
	{
		printf("entrer les valeurs du tableau\n");
		scanf("%d",&t[i]);
	}
	for(i=0 ; i<20 ; i++)
	{
		if(t[i]==0)
		{
			printf("la case n° %d est nulle\n\n",i);
		}
	}
	return 0;
}