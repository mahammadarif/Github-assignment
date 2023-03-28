/*********************************************************************************************
 * © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 * this source code, object code, or executable code (collectively, Software), is granted only
 * under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 * or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 * the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 * For further information, contact community.ruggedboard.com / info@ruggedboard.com
 *
 * Application: Calculate the length of the string
 * Brief: c program to Calculate the length of the string using a pointer.
 * Author: Mahammad Arif kotwal  ( arifm4348@gmail.com )
 * Title: Program Engineer
 * Last Modified Date: 24.03.2023
 *
/*********************************************************************************************/

// Header File
#include <stdio.h>

// Main Function
int main()
{
    char str[100];
    char *ptr;
    int l=0;
    printf("Input string : ");
    scanf("%[^\n]",str);
    ptr=str;
    while(*ptr != '\0')
    {
	    l++;
	    ptr++;
    }
    printf("\nthe length of the given string Rugged Board is :%d\n",l);
     return 0;

}

// Program End
