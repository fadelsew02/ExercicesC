#include <stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
	//int i = 1,j = 0,n = 0,k = 0, asc = 116;
	int l = 0,n = 0;
	int a = 0;
	char tab[165/2];
	int asc = 116, s = 0;
	char car = 0;
	char w = 0;
	char d = 0;
    
	printf("Donner le nombre de lignes\n");
	scanf("%d",&n);
	for (int i = 0; i < 165/2; ++i)
	{
		tab[i] = '-';
	}
	for (int i = 0; i < n; i++)
	{   
		tab[41] = asc - i ; 
		s = tab[41];
		for (int j = 40; j >= 41-i; j-=1)
		{
			tab[j] = s +1;;
	 		s = tab[j];
		}
		s = tab[41];
		for (int j = 42; j <= 41+i; j+=1)
		{
			tab[j] = s +1;;
			s = tab[j];
		}
		for (int l = 0; l < 165/2; ++l)
		{
			printf("%c-",tab[l]);
			if (l == 81)
			{
				printf("-");
			}
		}

		printf("\n");
	}
	w = tab[41];
	// printf("%c\n",w);
 //     printf("\n");
    l = 41;
	for (int i = n-2; i >=0; i--)
	{
		for (int i = 0; i < 165/2; ++i)
	    {
	     	tab[i] = '-';
	    }
	    car = w+n-i-1;
	    tab[41] = car;
	    for(l= 1; l<=i; l++)
	    {
	    	car++;
	    	tab[41-l] = car;
	    }
	    d = (w+n-i-1);
	    for (int l = 0; l <= i; l++)
	    {
	    	tab[41+l] = d++;
	    		// d++;
	    }
	    for (int i = 0; i < 165/2; ++i)
	    {
	     		printf("%c-",tab[i]);
	    }
	    printf("\n");


	}
 

     // printf("\n");
 //    for (int i = 0; i < 165/2; ++i)
	// {
	// 	tab[i] = '-';
	// }
 //    asc=97;
 //    s = 0;
 //    for (int i = n; i <=2* n -2; i++)
	// {   
		
	// 	for (int i = 0; i < 165/2; ++i)
	//     {
	// 	    tab[i] = '-';
	//     }
	//     tab[41] = asc +i -n+1 ; 
	// 	s = tab[41];
	// 	for (int j = 40; j >= i +3; j-=1)
	// 	{
	// 		tab[j] = s +1;;
	//  		s = tab[j];
	// 	}
	// 	s = tab[41];
	// 	for (int j = 42; j <= 59-i+20; j+=1)
	// 	{
	// 		tab[j] = s +1;;
	// 		s = tab[j];
	// 	}
	// 	for (int l = 0; l < 165/2; ++l)
	// 	{
	// 		printf("%c-",tab[l]);
	// 		if (l == 81)
	// 		{
	// 			printf("-");
	// 		}
	// 	}
	// 			printf("\n");
	// }


    // for (int i = 0; i < n; ++i)
	// {
	// 	for (int j = 1; j < n-i; ++j)
	// 	{
	// 		printf("-");
	// 	}
	// 	for (int j = 0; j <= i; ++j)
	// 	{
	// 		printf("t");
	// 	}
	// 	for (int k = 0; k < i; ++k)
	// 	{
	// 		printf("t");
	// 	}
	// 	printf("\n");
	// }

    /*
    Pour afficher la photo prise
     for (int i = 0; i < 165/2; ++i)
	{
		tab[i] = '-';
	}
    for (int i = 2*n-1; i >= n; i--)
	{   
		tab[41] = asc - i ; 
		s = tab[41];
		for (int j = 40; j >= 41-i; j-=1)
		{
			tab[j] = s +1;;
	 		s = tab[j];
		}
		s = tab[41];
		for (int j = 42; j <= 41+i; j+=1)
		{
			tab[j] = s +1;;
			s = tab[j];
		}
		for (int l = 0; l < 165/2; ++l)
		{
			printf("%c-",tab[l]);
		}*/
	// for (int i = 0; i < n; ++i)
	// {
	// 	// for (int j = 0; j < i+1; ++j)
	// 	// {
	// 	// 	printf("-");
	// 	// }
	// 	for (int k = 0; k < n-i-1; ++k)
	// for (int i = 0; i < 165/2; ++i)
	// {
	// 	tab[i] = '-';
	// }	{
	// 		printf("t");
	// 	}
	// 	for (int k = 0; k < n-i-2; ++k)
	// 	{
	// 		printf("t");
	// 	}
	// 	printf("\n");
	// }
	// for (int i = 0; i < 83; ++i)
	// {
	// 	printf("-");
	// }
	// printf("%c", 116);
	// for (int i = 0; i < 83; ++i)
	// {
	// 	printf("-");
	// } 
 //    ; 
	// for (int i = 1; i <= n; ++i)
	// {		
	// 	k = 0;
	// 	l=82-i-2;
	// 	m=l--;
	// 	for (int j = 1; j < m ; ++j)
	// 	{
	// 		printf("-");
	// 	}
	// 	while(k != 2*i-1)
	// 	{
	// 		printf("%c",116);
	// 		++k;
	// 	}
	// 	printf("\n");
	// }
	// {
	// 	for (int j = 0; j < 82-i; ++j)
	//     {
	// 	    printf("-");
	//     }
	//     asc = 116;
	//     if(i==0)
	//     {
	//     	for( k =82-i; k<83+i; k++)
	//         {
	//     	    printf("-%c-",asc);
	//     	    asc+=1;
	//         }
	//     }
	//     else if(i != 0)
	//     {
	//     	for( k = 82-i-2; k < 83+i+2; k++)
	//         {
	//         	for (int l = 82-i; l < 83+i ; ++l)
	//         	{
	//         		printf("%c-",asc);
	//         	}
	//     	    // asc+=1;
	//         }
	//     }    
	//     for (int j = 83+i; j <= 166; ++j)
	//     {
	//     	printf("-");
	//     }    
	//     printf("\n");
	// }
	// 
	return 0;
}