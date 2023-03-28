/*********************************************************************************************
 * © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 * this source code, object code, or executable code (collectively, Software), is granted only
 * under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 * or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 * the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 * For further information, contact community.ruggedboard.com / info@ruggedboard.com
 *
 * Application: ConditionalOperator
 * Brief: c program to print biggest of two numbers using ConditionalOperator
 * Author: Mahammad Arif Kotwal  ( arifm4348@gmail.com )
 * Title: Project Engineer
 * Last Modified Date: 20.03.2023
 *
/*********************************************************************************************/

// Header File
#include <stdio.h>

// Main Function
int main()
{
     int a,b;
     printf("Enter the values of a and b :\n");
     scanf("%d%d",&a,&b);
     if(a > b)
     {
          printf("%d is greater than %d\n",a,b);
     }
     else
     {
          printf("%d is greater than %d\n",b,a);
     }
     return 0;
}

// Program End
