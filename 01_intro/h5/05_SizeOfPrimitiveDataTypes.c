/*********************************************************************************************
 * © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 * this source code, object code, or executable code (collectively, Software), is granted only
 * under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 * or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 * the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 * For further information, contact community.ruggedboard.com / info@ruggedboard.com
 *
 * Application: size of data types.
 * Brief: c program to print the size of all primitive datatypes
 * Author: Mahammad Arif kotwal  ( arifm4348@gmail.com )
 * Title: Project Engineer
 * Last Modified Date: 25.03.2023
 *
/*********************************************************************************************/

// Header File
#include <stdio.h>

// Main Function
int main()
{
    printf("Size of the int is = %ld bytes\n",sizeof(int));
    printf("Size of the int is = %ld bytes\n",sizeof(int));
    printf("size of the unsigned int is  =%ld bytes\n",sizeof(unsigned int));
    printf("Size of the long is = %ld bytes\n",sizeof(long));
    printf("Size of the long long =%ld bytes\n",sizeof(long long));
    printf("Size of the float is =%ld bytes\n ",sizeof(float));
    printf("Size of the double is =%ld bytes\n",sizeof(double));
    printf("Size of the long Double is =%ld byte ",sizeof(long double));
    return(0);
}

// Program End
