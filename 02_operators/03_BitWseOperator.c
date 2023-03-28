/*********************************************************************************************
 * © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 * this source code, object code, or executable code (collectively, Software), is granted only
 * under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 * or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 * the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 * For further information, contact community.ruggedboard.com / info@ruggedboard.com
 *
 * Application: BitWseOperator
 * Brief: c program to show usage of bitwise operators & , | ,  ^ , ~ , << , >>
 * Author: Mahammad Arif Kotwal  ( arifm4348@gmail.com.com )
 * Title: Project Engineer
 * Last Modified Date: 20.03.2023
 *
/*********************************************************************************************/

// Header File
#include <stdio.h>

// Main Function
int main()
{
     int a = 50;
     int b = 5;
     int res;
     
     res = a | b;
     printf("Binary OR Operator of %d and %d is %d\n",a,b,res);
     res = a & b;
     printf("Binary AND Operator of %d and %d is %d\n",a,b,res);
     res = a ^ b;
     printf("Binary XOR Operator of %d and %d is %d\n",a,b,res);
     res = ~a;
     printf("Binary Ones Complement Operator of %d is %d\n",a,res);
     res << a;
     printf("Binary Left Shift Operator of %d is %d\n",a,res);
     res >> a;
     printf("Binary Right Shift Operator of %d is %d\n",a,res);
     return 0;
}

// Program End
