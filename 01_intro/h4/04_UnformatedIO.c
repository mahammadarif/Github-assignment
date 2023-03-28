/*********************************************************************************************
 * © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 * this source code, object code, or executable code (collectively, Software), is granted only
 * under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 * or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 * the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 * For further information, contact community.ruggedboard.com / info@ruggedboard.com
 *
 * Application: getchar() and putchar()
 * Brief: c program using getchar() and putchar() it reads until it encounters a \n character at
 * which it stops
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
	char ch;
	printf("Enter characters to display\n");
	while(ch != '\n')
	{
		ch =getchar();
		putchar(ch);

	}
	

     
     return 0;
}

// Program End
