/*********************************************************************************************
 * © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 * this source code, object code, or executable code (collectively, Software), is granted only
 * under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 * or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 * the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 * For further information, contact community.ruggedboard.com / info@ruggedboard.com
 *
 * Application: ifelse
 * Brief: c program to check the entered number is greater than 20 or Less than 20.
 * Author: Mahammad Arif Kotwal  ( arifm4348@gmail.com )
 * Title: Program Engineer
 * Last Modified Date: 25.03.2023
 *
/*********************************************************************************************/

// Header File
#include <stdio.h>

// Main Function
int main()
{
	int a;
o:
	printf("Enter a number\n");
	scanf("%d",&a);
	if(a>20)
	{
		printf("The number is greater than 20\n\n");
		goto o;
	}
	else if(a<20)
	{
		printf("The number islesser than 20\n");
	}

     
     return 0;
}

// Program End
