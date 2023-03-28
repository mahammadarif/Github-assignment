/*********************************************************************************************
 * © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 * this source code, object code, or executable code (collectively, Software), is granted only
 * under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 * or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 * the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 * For further information, contact community.ruggedboard.com / info@ruggedboard.com
 *
 * Application: sum of individual row
 * Brief: c program to calculate sum of individual rows,take num of rows and columns from user and also matrix elements.
 * Author: Mahammad Arif kotwal  ( arim4348@gmail.com )
 * Title: Program Engineer
 * Last Modified Date: 24.03.2023
 *
/*********************************************************************************************/

// Header File
#include <stdio.h>

// Main Function
int main()
{
	int n,m;
	int s=0;
	printf("Please enter rows and columns of matrix : ");
	scanf("%d%d",&n,&m);
	int a[n][m];
	int i,j;
	printf("\n        Enter matrix elements");
	for(i=0;i<n;i++)
	{
		printf("\n");
		for(j=0;j<m;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
        printf("\n    given matrix is\n");
        for(i=0;i<n;i++)
        {
		printf("\n");
                for(j=0;j<m;j++)
                {
                        printf(" %d ",a[i][j]);
                }

        }
        for(i=0;i<n;i++)
        {
                printf("\n");
                for(j=0;j<m;j++)
                {
                      s += a[i][j];
                }
            printf("sum of row %d is :  %d",i,s);
        }

     return 0;
}

// Program End
