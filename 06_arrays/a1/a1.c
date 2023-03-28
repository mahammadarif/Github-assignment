/*********************************************************************************************
 * © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 * this source code, object code, or executable code (collectively, Software), is granted only
 * under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 * or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 * the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 * For further information, contact community.ruggedboard.com / info@ruggedboard.com
 *
 * Application: string comparision
 * Brief: c program, if user enter "hi" then output print "Hello" else print "not enter hi"
 * Author: Mahammad arif Kotwal  ( arifm4348@gmail.com )
 * Title: Program engineer
 * Last Modified Date: 23.03.2023
 *
/*********************************************************************************************/

// Header File
#include <stdio.h>
#include"string.h"
// Main Function
int main()
{
     char c[20];
     char a[20]="hi";
     printf("Plz enter a str:\n");
     scanf("%s",c);
     printf("%s\n",c);
     if(strcmp(c,a)==0)
     {
	     printf("Hello\n");
     }
     else
     {
            printf("not enterd hi\n");
     }
     return 0;
}

// Program End
