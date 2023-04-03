/*********************************************************************************************
 * © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 * this source code, object code, or executable code (collectively, Software), is granted only
 * under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 * or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 * the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 * For further information, contact community.ruggedboard.com / info@ruggedboard.com
 *
 * Application: chane upper case to lower case
 * Brief: c program to change case of the given string 
 * Author: Mahammad Arif Kotwal  ( arifm4348@gmail.com )
 * Title: Progrm Engineer
 * Last Modified Date: 25.03.2023
 *
/*********************************************************************************************/

// Header File
#include <stdio.h>
#include <ctype.h>
#include "string_case.h"

// Main Function
int main()
{
        char c[100];
        printf("Entar a string\n");
        scanf("%s",c);
        string_case(c);
     return 0;
}
