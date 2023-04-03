/*********************************************************************************************
 * © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 * this source code, object code, or executable code (collectively, Software), is granted only
 * under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 * or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 * the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 * For further information, contact community.ruggedboard.com / info@ruggedboard.com
 *
 * Application: Add Two Complex Numbers using structures
 * Brief: c program to Add Two Complex Numbers by Passing Structure to a Function.
 * Author: Mahammad Arif Kotwal  ( arifm4348@gmail.com )
 * Title: Program Engieer
 * Last Modified Date: 31.03.2023
 *
/*********************************************************************************************/

// Header File
#include <stdio.h>
#include"str.h"
struct com
{
	float real;
	float img;
};

// Main Function
int main()
{     
	struct com n1,n2,res;
	printf("For 1st complex number\n");
        printf("Enter the real and imaginary parts:");
        scanf("%f%f",&n1.real,&n1.img);

	printf("\n");
	printf("For 2nd complex number\n");
	printf("enter the real and imaginary parts:");
	scanf("%f%f",&n2.real,&n2.img);

	res = add(n1,n2);
        
	printf("\n");
	printf("sum = %.2f + %.2fi\n",res.real,res.img);
     return 0;
}

// Program End
