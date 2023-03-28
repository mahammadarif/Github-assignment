/*********************************************************************************************
 * © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 * this source code, object code, or executable code (collectively, Software), is granted only
 * under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 * or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 * the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 * For further information, contact community.ruggedboard.com / info@ruggedboard.com
 *
 * Application: no return typr with arguments
 * Brief: c program to add two numbers using user defined function sum of no return type and arguments are passing to this function from main().Call this user defined sum function from main().
 * Author: Mahammad Arif  ( arifm4348@gmail.com )
 * Title: Program Engineer
 * Last Modified Date: 23.03.2023
 *
/*********************************************************************************************/

// Header File
#include <stdio.h>
#include"add.h"

// Main Function
int main()
{
	int a,b;
	printf("enter values of a and b\n");
	scanf("%d%d",&a,&b);
        add(a,b);     
     return 0;
}

// Program End
