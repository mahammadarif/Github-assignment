/*********************************************************************************************
 * © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 * this source code, object code, or executable code (collectively, Software), is granted only
 * under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 * or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 * the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 * For further information, contact community.ruggedboard.com / info@ruggedboard.com

 * Application: ArithMeticOperator.c 
 * Brief: ArithMetic Operator like Addition, Subtraction, Multiplication, Division, Modulo Division, 
 * Increment the value of a by 1, Decremented the value of b by 1.
 * Author: Mahammad Arif Kotwal ( arifm4348@gmail.com )
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
     printf("Enter the values of a and b\n");
     scanf("%d%d",&a,&b);
     int add=a+b;
     int sub=a-b;
     int mul=a*b;
     float div=(float)a/b;
     int m=a%b;
     int c= ++a;
     int d=++b;
     printf("Addition         : %d + %d = %d\n",a,b,add);
     printf("Substraction     : %d - %d = %d\n",a,b,sub);
     printf("Mutliplication   : %d x %d = %d\n",a,b,mul);
     printf("Division         : %d / %d = %.02lf\n",a,b,div);
     printf("Modulo Division  : %d & %d = %d\n",a,b,m);
     printf("Increment the value of a by 1 = %d\n",c);
     printf("Increment the value of b by 1 = %d\n",d);


     return 0;
}

// Program End
