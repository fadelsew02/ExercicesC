#include<stdio.h>
#include<stdlib.h>
#define n 2000
#define vrai 1
#define faux 0

int main(void)
{
	int raye[n+1];
	int prem = 0, na = 0, i = 0;

	for(i = 1; i<=n; i++)
	{
		raye[i] = faux;
	}
	raye[1] = vrai;

	prem = 1;
	while(prem*prem <= n)
	{
		while(raye[++prem] && prem < n)
		{

		}
		for(i = 2*prem; i<=n; i+=prem)
		{
			raye[i] = vrai;
		}
	}

	printf("Entre 1 et %d, les nombres premiers sont:\n",n);
	for(i = 1; i <= n; i++)
	{
		if(!raye[i])
		{
			printf("%7d",i);
			na++;
			if(na % 10 == 0)
			{
				printf("\n");
			}
		}
	}

	return 0;
}