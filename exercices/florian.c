#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<float.h>

int main(void)
{
	int n = 0, i = 0, d = 0, e = 0, c = 0;
    double m = 0;
	printf("Entrer un nombre entier\n");
	scanf("%d",&n);
	while(n<0)
	{
		printf("Entier positif stp\n");
		scanf("%d",&n);
	} 
	for(d = 2; d <= n; d++)
	{
		e = 0;
		m = d;
		for(i = 0; i <= sqrt(m); i++)
		{
			c = fmod(d,i);
			if(c == 0)
			{
				e = e + 1;
			}
		}
		if(e == 1)
		{
			printf("%d est un nombre premier\n\n",d);
		}
	}

	return 0;
} 