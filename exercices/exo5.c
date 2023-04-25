#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int a=0, max, min;
	printf("entier\n");
	scanf("%d",&a);
	max=a;
	min=a;
	while(a != 0)
	{
		if(a<min)
			min=a;
		else
			max=a;
		printf("nouvel entier\n");
		scanf("%d",a);
	}
	   
	printf("le minimum est %d et le maximum est %d \n",min,max);
	return 0;
		
}