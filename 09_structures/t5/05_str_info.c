/*********************************************************************************************
 * © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 * this source code, object code, or executable code (collectively, Software), is granted only
 * under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 * or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 * the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 * For further information, contact community.ruggedboard.com / info@ruggedboard.com
 *
 * Application: Structures with for loops
 * Brief: c program to Store Information of 5 Students Using Structure.
 * Author: Mahammad Arif Kotwal  ( arifm4348@gmail.com )
 * Title: Program Engineer
 * Last Modified Date: 31.03.2023
 *
/*********************************************************************************************/

// Header File
#include <stdio.h>

struct student
{
	int roll_n;
	char name[50];
	int marks;
};

// Main Function
int main()
{
	struct student s[5];

      printf("Enter informaion of students:\n\n ");
      
	 int i;
      for(i=1; i<=5;i++)
      {
	         s[i].roll_n=i;
		 printf("For Roll number %d\n",i);
       		 printf("Enter name :");
     		 scanf("%s",s[i].name);
      		 printf("Enter marks :");
     		 scanf("%d",&s[i].marks);
		 printf("\n");
      }


      for(i=1;i<=5;i++)
      {
      		printf("Roll Number :%d \n",s[i].roll_n);
      		printf("Name : %s\n",s[i].name);
      		printf("marks :%d\n",s[i].marks);
		printf("\n");
      }
     
     return 0;
}

// Program End
