#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int a=0, x=0;
	printf("enter a integer that you verify parity\n");
	scanf("%d",&a);
	x=a%2;
	if(x==0)
		printf("%d is pair\n",a);
	else
		printf("%d is impair\n",a);
	return 0;

}