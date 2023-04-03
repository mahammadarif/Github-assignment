/*********************************************************************************************
 * © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 * this source code, object code, or executable code (collectively, Software), is granted only
 * under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 * or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 * the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 * For further information, contact community.ruggedboard.com / info@ruggedboard.com
 *
 * Application: palindrom
 * Brief: c program to check whether given string is palindrome or not.
 * Author: Mahammad Arif Kotwal  ( arifm4348@gmail.com )
 * Title: Program Enginner
 * Last Modified Date: 02.04.2023
 *
/*********************************************************************************************/

// Header File
#include <stdio.h>
#include <string.h>
#include"palin.h"
int main() {
    char str[100];
    int i, j, len;
    int isPalindrome = 1;

    printf("Enter a string: ");
    scanf("%s", str);

    len = strlen(str);

    palin(str);
    return 0;
}
 
// Program End
