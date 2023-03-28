/*********************************************************************************************
 * © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 * this source code, object code, or executable code (collectively, Software), is granted only
 * under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 * or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 * the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 * For further information, contact community.ruggedboard.com / info@ruggedboard.com
 *
 * Application: Array concat
 * Brief: c program to print one dimensional array after merge two one dimensional array, take size and elements of first and sec array from user.
 * Author: Mahammad Arif Kotwal  (arifm4348@gmail.com )
 * Title: Program Engineer
 * Last Modified Date: 24.03.2023
 *
/*********************************************************************************************/

// Header File
#include <stdio.h>

// Main Function
int main()
{
	int n,i,m;
	int index=0;
	printf("Plz enter size of first array : ");
	scanf("%d",&n);
	int a[n];
	printf("\nenter 1's array elements\n");
	for(i=0;i<=n-1;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nyour 1's array is : ");
	for(i=0;i<=n-1;i++)
	{
		printf(" %d ",a[i]);
	}
	printf("\nPlz enter size of 2nd array : ");
        scanf("%d",&m);
        int b[m];
        printf("\nenter 2nd array elements\n");
        for(i=0;i<=m-1;i++)
        {
                scanf("%d",&b[i]);
        }
        printf("\nyour 2nd array is : ");
        for(i=0;i<=m-1;i++)
        {
                printf(" %d ",b[i]);
        }
	printf("\n after merging 1's and 2nd array : ");
	int d=n+m;
	int x[d];
	for(i=0;i<=n-1;i++)
	{
		x[index]=a[i];
		index++;
	}
	for(i=0;i<=m-1;i++)
	{
		x[index]=b[i];
		index++;
	}
	for(i=0;i<=d-1;i++)
	{
		printf(" %d ",x[i]);
	}
     
     return 0;
}

// Program End
