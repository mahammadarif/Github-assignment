/*********************************************************************************************
 * © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 * this source code, object code, or executable code (collectively, Software), is granted only
 * under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 * or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 * the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 * For further information, contact community.ruggedboard.com / info@ruggedboard.com
 *
 * Application: file oparations
 * Brief: c program to Find the Number of Lines in a Text File.
 * Author: Mahammad Arif Kotwal  ( arifm4348@gmail.com )
 * Title: Program Engineer
 * Last Modified Date: 03.04.2023
 *
/*********************************************************************************************/

// Header File
#include <stdio.h>

// Main Function
int main()
{
     FILE *fp;
     char filename[30];
     int count = 0;
     char c;


     printf("Enter the filename : \n");
     scanf("%s",filename);

     fp = fopen(filename,"r");

     if(fp == NULL)
     {
	     printf("Error in the file opening\n");
	   return 1;
     }
//End of the File (EOF)
     while((c = fgetc(fp)) != EOF)
     {
	     if(c == '\n')
	     {
		     count++;
	     }
     }
     fclose(fp);

     printf("Number of line in %s :%d\n",filename,count);
     return 0;
}

// Program End
