#include<stdio.h>

struct time
{
        int hour;
        int minutes;
        int seconds;
};

struct time sub(struct time t1,struct time t2)
{
	struct time temp;
     temp.hour = t1.hour - t2.hour;
     temp.minutes = t1.minutes - t2.minutes;
     temp.seconds = t1.seconds - t2.seconds;

     return temp;

}
