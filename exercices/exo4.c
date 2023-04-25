#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int a=0, b=0, c=0, max=0;
	printf("enter the integer a,b,c\n");
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	max=a;
	if(b>a)
		max=b;
	else if(c>a)
		max=c;
	else
		max=a;
	printf("le plus grand entier entré est %d\n",max);
	return 0;

}