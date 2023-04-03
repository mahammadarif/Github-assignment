/*********************************************************************************************
 * © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 * this source code, object code, or executable code (collectively, Software), is granted only
 * under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 * or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 * the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 * For further information, contact community.ruggedboard.com / info@ruggedboard.com
 *
 * Application: adding two structur variaables
 * Brief: c program to add two distances in the inch-feet system using structure.
 * Author: Mahammad Arif Kotwal  ( arifm4348@gmail.com )
 * Title: Program Engineer
 * Last Modified Date: 21.03.2023
 *
/*********************************************************************************************/

// Header File
#include <stdio.h>

struct Distance
{
	int feet;
	float inch;
};

// Main Function
int main()
{
	struct Distance d1, d2, res;

	printf("Enter the 1st distance\n");
	printf("Enter in feet :");
	scanf("%d",&d1.feet);

	printf("Enter in inch :");
	scanf("%f",&d1.inch);

	printf("\n");
	printf("Enter the 2nd distance\n");
	printf("Enter in feet :");
	scanf("%d",&d2.feet);

	printf("Enter in inch :");
	scanf("%f",&d2.inch);

	res.feet = d1.feet+d2.feet;
	res.inch = d1.inch+d2.inch;

	if(res.inch >12)
	{
		res.feet = res.feet+(res.inch/12);
		res.inch=(int) res.inch % 12;
	}

	printf("sum of the distance =%d'-%f''\n",res.feet,res.inch);
     return 0;
}

// Program End
