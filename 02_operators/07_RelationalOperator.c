/*********************************************************************************************
 * © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 * this source code, object code, or executable code (collectively, Software), is granted only
 * under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 * or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 * the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 * For further information, contact community.ruggedboard.com / info@ruggedboard.com
 *
 * Application: RelationalOperator
 * Brief: c program to print value using relational operator 
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
	int a,b;
	printf("enter values foe a  and b\n");
	scanf("%d%d",&a,&b);
	if(a == b){printf("%d == %d is 0\n",a,b);}
	else{printf("%d != %d is 1\n",a,b);}
	if(a < b){printf("%d < %d is 0\n",a,b);}
	else{printf("%d > %d is 1\n",a,b);}
	        if(a <= b){printf("%d <= %d is 0\n",a,b);}
        else{printf("%d >= %d is 1\n",a,b);}

     
     return 0;
}

// Program End
