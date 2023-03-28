/*********************************************************************************************
 * © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 * this source code, object code, or executable code (collectively, Software), is granted only
 * under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 * or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 * the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 * For further information, contact community.ruggedboard.com / info@ruggedboard.com
 *
 * Application: scanf
 * Brief: c program using scanf get Name,Rollnumber,CGPA from user input and print itc program using scanf get Name,Rollnumber,CGPA from user input and print it
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
	char Name[25];
	int Rollnumber;
	float CGPA;
	printf("Enter your Name : ");
	scanf("%s",Name);
	printf("\nEnter your Rollnumber : ");
	scanf("%d",&Rollnumber);
	printf("\nEnter your CGPA : ");
	scanf("%f",&CGPA);

	printf("Name : %s\n",Name);
	printf(" Rollnumber : %d\n",Rollnumber);
	printf("CGPA : %lf\n ",CGPA);
     
     return 0;
}

// Program End
