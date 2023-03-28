/*********************************************************************************************
 * © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 * this source code, object code, or executable code (collectively, Software), is granted only
 * under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 * or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 * the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 * For further information, contact community.ruggedboard.com / info@ruggedboard.com
 *
 * Application:Find the maximum number between two numbers  
 * Brief: c program to find the maximum number between two numbers using a pointer.
 * Author: Mahammad Arif Kotwal  ( arifm4348@gmail.com )
 * Title: Program Engineer
 * Last Modified Date: 24.03.2023
 *
/*********************************************************************************************/

// Header File
#include <stdio.h>

// Main Function
int main()
{
	int a,b;
	printf("Input the first number : ");
	scanf("%d",&a);
	printf("\nInput the second number : ");
	scanf("%d",&b);

	int *x=&a;
	int *y=&b;
	if(*x > *y)
		printf("%d is maximum number\n",*x);
	else
	{
		printf("%d is maximum number\n",*y);
	}
     
     return 0;
}

// Program End
