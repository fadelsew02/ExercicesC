#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int a=0, x=0, i=2;
	printf("entrer le nombre\n");
	scanf("%d",&a);
	for(i=2 ; i<=a ; i++) 
	{
		x=a % i;
		if(x==0)
			printf("%d est diviseur\n",i);
	}
	return 0;
}