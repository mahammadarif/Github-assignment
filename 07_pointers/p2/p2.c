/*********************************************************************************************
 * © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 * this source code, object code, or executable code (collectively, Software), is granted only
 * under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 * or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 * the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 * For further information, contact community.ruggedboard.com / info@ruggedboard.com
 *
 * Application: Demonstrate the use of & and * operator
 * Brief: c program to demonstrate the use of &(address of) and *(value at address) operator.
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
	int a =300;
	float b = 300.600006;
	char c ='z';
	int *m=&a;
	float *fx=&b;
	char *ch=&c;

	printf("Using & oparator\n");
	printf("------------------------------\n");
	printf("adress of m = %p\n",m);
	printf("adress of fx = %p\n",fx);
        printf("adress of ch = %p\n",ch);

	printf("\n\n");
        printf("Using * oparator\n ");
	printf("-----------------------------\n");
	printf("value at address of m= %d\n",*m);
	printf("value at address of fx= %lf\n",*fx);
	printf("value at address of ch = %c\n",*ch);

	printf("\n\n");
	printf("Using only pointer variable\n");
	printf("--------------------------------\n");
        printf("address of m = %p\n",m);
        printf("address of fx = %p\n",fx);
        printf("address of ch = %p\n",ch);

	printf("\n\n");
	printf("Using only pointer operator\n");
	printf("--------------------------------\n");
	printf("value at address of m = %d\n",*m);
	printf("value at address of fx = %lf\n",*fx);
	printf("value at address of ch = %c\n",*ch);
     
     return 0;
}

// Program End
