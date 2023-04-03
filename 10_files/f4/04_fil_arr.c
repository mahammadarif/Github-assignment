/*********************************************************************************************
 * © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 * this source code, object code, or executable code (collectively, Software), is granted only
 * under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 * or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 * the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 * For further information, contact community.ruggedboard.com / info@ruggedboard.com
 *
 * Application: Reading files and store in an array.
 * Brief: c program to read the file and store the lines into an array.
 * Author: Mahammad Arif Kotwal  ( arifm4348@gmail.com )
 * Title: Program Engineer
 * Last Modified Date: 03.04.2023
 *
/*********************************************************************************************/

// Header File
#include <stdio.h>
#include<stdlib.h>

#define M_line 100
#define M_l_length 100

// Main Function
int main()
{
FILE *fp;
char filename[50];
char line[M_line][M_l_length];
int i=0;
printf("enter the file name : \n");
scanf("%s",filename);

fp = fopen(filename,"r");
if(fp == NULL)
{
	printf("Error opening file.\n");
	return 1;
}
   // Read each line of text from the file and store in array
while(fgets(line[i],M_l_length,fp))
{
	i++;
}

fclose(fp);

for(int j =0; j<i;j++)
{
	printf("%s",line[j]);
}
     return 0;
}

// Program End
