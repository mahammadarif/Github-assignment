/*********************************************************************************************
 * © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 * this source code, object code, or executable code (collectively, Software), is granted only
 * under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 * or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 * the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 * For further information, contact community.ruggedboard.com / info@ruggedboard.com
 *
 * Application: sorting the array in ascending order using bubble sort algorithm
 * Brief: c program to print one dimensional array in ascending order, take size and elements of array from user.
 * Author: Mahammad Arif kotwal ( arifm4348@gmail.com )
 * Title: Program engineer
 * Last Modified Date: 23.03.2023
 *
/*********************************************************************************************/

// Header File
#include <stdio.h>

// Main Function
int main()
{
   int n;
   int i;
   int temp;
printf("Plz enter size of arry : \n");
scanf("%d",&n);
int a[n];
     printf("enter the array elements\n");

for(i=0;i<=n-1;i++)
{
	scanf("%d",&a[i]);
}
printf("your array : ");
for(i=0;i<=n-1;i++)
{
	printf(" %d ",a[i]);
}
printf("\n\n");
for (i = 0; i <n-1; i++) {
        for (int j = 0; j < n- i - 1; j++) {
            if (a[j] > a[j+1]) {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    
    printf("The array in ascending order is: ");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

      
     return 0;
}

// Program End
