/*********************************************************************************************
 * © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 * this source code, object code, or executable code (collectively, Software), is granted only
 * under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 * or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 * the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 * For further information, contact community.ruggedboard.com / info@ruggedboard.com
 *
 * Application: using Structure
 * Brief: c program to Calculate Difference Between Two Time Periods.
 * Author: Mahammad Arif Kotwal  ( arifm4348@gmail.com )
 * Title: Program Engieer
 * Last Modified Date: 31.03.2023
 *
/*********************************************************************************************/

// Header File
#include <stdio.h>
#include"sub.h"

struct time
{
	int hour;
	int minutes;
	int seconds;
};
// Main Function
int main()
{
     struct time t1,t2,t3;

     printf("Enter start time\n");
     printf("enter hours, minuts and seconds: ");
     scanf("%d%d%d",&t1.hour,&t1.minutes,&t1.seconds);

     printf("\n");
     printf("Enter end time\n");
     printf("enter hours, minuts and seconds: ");
     scanf("%d%d%d",&t2.hour,&t2.minutes,&t2.seconds);

     t3 = sub(t1,t2);

     printf("\n");
     printf("Time Difference : %d:%d:%d - %d:%d:%d = %d:%d:%d\n",t1.hour,t1.minutes,t1.seconds,t2.hour,t2.minutes,t2.seconds,t3.hour,t3.minutes,t3.seconds);


     return 0;
}

// Program End
