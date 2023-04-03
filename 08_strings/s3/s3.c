/*********************************************************************************************
 * © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 * this source code, object code, or executable code (collectively, Software), is granted only
 * under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 * or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 * the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 * For further information, contact community.ruggedboard.com / info@ruggedboard.com
 *
 * Application: count num of vowels,consonents and total alphabets
 * Brief: c program to count num of vowels,consonents and total alphabets in given string.
 * Author: Mahammad Arif Kotwal  ( arifm4348@gmail.com )
 * Title: Program Engineer
 * Last Modified Date: 25.03.2023
 *
/*********************************************************************************************/

// Header File
#include <stdio.h>
#include<string.h>
#include <ctype.h>
#include"alpha.h"
// Main Function
int main()
{
	char str[100];
	printf("enter the string :");
	fgets(str, sizeof(str), stdin);
	int a =alphabets(str);
	printf("\nNumber of Alphabets in given string is : %d\n",a);
	int v = vowels(str);
	printf("Number of vowels in given string is : %d\n",v);
	int c =consonents(str);
	printf("Number of consonents is given string is : %d\n",c);

     
     return 0;
}

// Program End
