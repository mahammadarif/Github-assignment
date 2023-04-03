#include<stdio.h>
#include<string.h>

int consonents(char *str)
{
	 int con=0;
        int i;
        for(i=0;str[i] !='\0';i++)
        {
	                if(str[i] != 'A' && str[i] != 'a' &&
                                str[i] != 'E' && str[i] != 'e' &&
                                str[i] != 'I' && str[i] != 'i' &&
                                str[i] != 'O' && str[i] != 'o' &&
                               str[i] != 'U' && str[i] != 'u')
                        con++;
        }

        
        return con;

}
