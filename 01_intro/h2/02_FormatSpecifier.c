/*********************************************************************************************
 * © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 * this source code, object code, or executable code (collectively, Software), is granted only
 * under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 * or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 * the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 * For further information, contact community.ruggedboard.com / info@ruggedboard.com
 *
 * Application: Format Specifier
 * Brief: c program using format specifier in printf statement for int ,char,float,double and string
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
	int i=1234;
	printf("integer is : %d\n",i);
	char c ='A';
	printf("Character is : %c\n",c);
	float f =3.43;
	printf("float is : %lf\n",f);
	double d=234.325323;
	printf("double is : %lf\n",d);
	char s[]="Mahammad Arif";
	printf("String is : %s\n",s);
     
     return 0;
}

// Program End
