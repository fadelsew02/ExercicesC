#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int a=0, b=0, r=0;
	printf("entrer les entiers à échanger\n");
	scanf("%d",&a);
	scanf("%d",&b);
	r=a;
	a=b;
	b=r;
	printf("les valeurs avant échange sont a=%d et b=%d \n",r,a);
	printf("les valeurs après échange sont a=%d et b=%d \n",a,r);
	return 0;
}