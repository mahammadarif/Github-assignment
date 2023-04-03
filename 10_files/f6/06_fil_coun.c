/*********************************************************************************************
 * © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 * this source code, object code, or executable code (collectively, Software), is granted only
 * under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 * or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 * the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 * For further information, contact community.ruggedboard.com / info@ruggedboard.com
 *
 * Application: file oparations
 * Brief: Write a simple c program to count number of words and characters in a file.
 * Author: Mahammad Arif Kotwal  ( arifm4348@gmail.com )
 * Title: Program engineer
 * Last Modified Date: 03.04.2023
 *
/*********************************************************************************************/

// Header File
#include <stdio.h>
#include<ctype.h>

FILE *fp;
char filename[30];
int line=0;
int words =0;
int characters=0;
char c;
// Main Function
int main()
{
	printf("Enter the file name : \n");
	scanf("%s",filename);

	fp = fopen(filename,"r");

	if(fp == NULL)
	{
		printf("Error in the opening file \n");
		return 1;
	}
	while((c = fgetc(fp))!= EOF)
	{
		if(c == '\n')
		{
			line++;
		}
		else if(isspace(c))
		{
			words++;
		}
		else if(c >= 'A' && c <= 'z' || c >='a' && c <='z')
		{
			characters++;
		}
	}
	printf("Number of lines in file  is : %d\n",line);
	printf("Number of words in file  is : %d\n",words);
	printf("Number of characters in file  is : %d\n  ",characters);
    	fclose(fp);
       	return 0;
}

// Program End
