/*********************************************************************************************
 * © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 * this source code, object code, or executable code (collectively, Software), is granted only
 * under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 * or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 * the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 * For further information, contact community.ruggedboard.com / info@ruggedboard.com
 *
 * Application: dowhile
 * Brief: c program to print number from 10 to 20 using do while loop.
 * Author: Mahammad Arif Kotwal  ( arifm4348@gmail.com )
 * Title: Project Engineer
 * Last Modified Date: 21.03.2023
 *
/*********************************************************************************************/

// Header File
#include <stdio.h>

// Main Function
int main()
{
     int i=10;
     do
     {
          printf("num=%d\n",i);
          i++;
     } while (i<=20);
     
     return 0;
}

// Program End
