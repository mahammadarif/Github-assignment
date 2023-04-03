#include <stdio.h>
#include <string.h>


void palin(char *str)
{
	int i,j,len,isPalin;
    len = strlen(str);

    for(i = 0, j = len-1; i < len/2; i++, j--) 
    {
        if(str[i] != str[j]) 
	{
        	printf("%s is not a palindrome.\n", str);
		break;
        }
       	else 
        {
        	printf("%s is  a palindrome.\n", str);
		break;
        }
    }
}


