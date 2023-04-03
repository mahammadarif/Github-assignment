/*********************************************************************************************
 * © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 * this source code, object code, or executable code (collectively, Software), is granted only
 * under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 * or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 * the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 * For further information, contact community.ruggedboard.com / info@ruggedboard.com
 *
 * Application: The strcmp() compares two strings character by character. If the strings are equal, the function returns 0.
 * Brief:c program to compare two strings,if user enter "danger" then print "entered correct password" else print "wrong password"
 * Author: Mahammad Arif Kotwal  ( arifm4348@gmil.com )
 * Title: Program Engineer
 * Last Modified Date: 28.03.2023
 *
/*********************************************************************************************/

// Header File
#include <stdio.h>
#include<string.h>
// Main Function
int main()
{
   char pw[50];
   printf("plzz enter your Password : ");
   scanf("%s",pw);
   if( strcmp(pw,"danger")==0)
   {
	  printf("\n entered correct password\n");
   }
   else
   {
	   printf("wrong password\n");
   }

     return 0;
}

// Program End
