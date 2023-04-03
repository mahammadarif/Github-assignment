/*********************************************************************************************
 * © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 * this source code, object code, or executable code (collectively, Software), is granted only
 * under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 * or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 * the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 * For further information, contact community.ruggedboard.com / info@ruggedboard.com
 *
 * Application: file read oparation.
 * Brief: c program to read an existing file.
 * Author: Mahammad Arif Kotwal  ( arifm4348@gmail.com )
 * Title: Program Engineer
 * Last Modified Date: 02.04.2023
 *
/*********************************************************************************************/

// Header File
#include <stdio.h>
#include<stdlib.h>

// Main Function
int main()
{
	FILE *fp;
	char name[50];
	char ch;

	fp = fopen("name.txt","r");

	if(fp == NULL)
	{
		printf("Error in opening file !!..\n");
		exit(0);
	}

	printf("name : %s\n",name);
	while(1)
	{
		ch =fgetc(fp);
		if(ch == EOF)
			break;
		printf("%c",ch);
	}
     fclose(fp);
     return 0;
}

// Program End
