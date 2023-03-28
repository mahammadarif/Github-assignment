/*********************************************************************************************
 * © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 * this source code, object code, or executable code (collectively, Software), is granted only
 * under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 * or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 * the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 * For further information, contact community.ruggedboard.com / info@ruggedboard.com
 *
 * Application: IfelseLadder
 * Brief: c program to check the greatest among four numbers using elseifLadder.
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
	int a,b,c,d;
	
	printf("Enter the values of a,b,c,d ");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	if(a>b && a>c && a>d)
	{
		printf("\n%d is the largest",a);
	}
	else if(b>a && b>c && c>d)
        {
		printf("\n%d is the largest",b);
	}
	else if(c>a && c>b && c>d)
        {
		printf("\n%d is the largest",c);
	}
	else if(d>a && d>b && d>c)
        {
		printf("\n%d is the largest",d);
	}


     
     return 0;
}

// Program End
