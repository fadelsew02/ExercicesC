#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define nl 37

int main(void)
{
	struct code
	{
		char lettre;
		char *morse;
	};
	struct code table[nl] =
	{
		'A', ".-",    'B', "-...",    'C', "-.-.",
		'D', "-..",   'E', ".",       'F', "..-.",
		'G', "--.",   'H', "....",    'I', "..",
		'J', ".---",  'K', "-.-" ,    'L', ".-..",
		'M', "--",    'N', "-.",      'O', "---",
		'P', ".--.",  'Q', "--.-",    'R', ".-.",
		'S', "...",   'T', "-",       'U', "..-",
		'V', "...-",  'W', ".--",     'X', "-..-",
		'Y', "-.--",  'Z', "--..",    '.', ".-.-.-",
		'0', "-----", '1', ".----",   '2', "..---",
		'3', "...--", '4', "....-",   '5', ".....",
		'6', "-....", '7', "--...",   '8', "---..",
		'9', "----."
	};

	int i=0, j= 0;
	char phrase[128];


	printf("Entrer votre texte(une ligne maxi)\n\n");
	gets(phrase);
	for(i = 0; i < strlen(phrase); i++)
	{
		j = 0;
		while(phrase[i] != table[j].lettre && j++ < nl-1 );
		if(j < nl)
		{
			printf(" %5s ",table[j].morse);
		}
		else
		{
			printf("????????");
		}
		if( !((i+1)%10) )
		{
			printf("\n");
		}
	}

	return 0;
}


/*
int main(void)
{
	int i = 0, j = 0;
	char phrase[128];
	char tab1[37] = 
	        {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O',
	         'P','Q','R','S','T','U','V','W','X','Y','Z','.',
             '0','1','2','3','4','5','6','7','8','9'
            };
    char tab2[37] =
    { 
    	".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--", "-.", "---", 
    	".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--..", ".-.-.-", "-----", ".----", 
    	"..---", "...--", "....-", ".....", "-....", "--...", "---..", "----." 
    }; 

    printf("Entrer votre texte(une ligne maxi)\n\n");
	gets(phrase);
	while(phrase[i] != '\n')
	{
	   for(i = 0; i < strlen(phrase); i++)
	    {
	   	    if( tab1[i] == phrase[i])
	    	{
	    		printf(" %5s ",tab2[i]);
	   	    }
	     	else
	     	{
	   		    printf(" ??????? ");
	   	    }
	   	    if( !((i+1)%10) )
	   	    {
	   	    	printf("\n");
	   	    }   
	    }         
	}

	return 0;


}*/