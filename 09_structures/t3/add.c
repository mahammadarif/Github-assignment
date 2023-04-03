#include <stdio.h>

struct com
{
        float real;
        float img;
};

struct com add(struct com n1,struct com n2)
{
        struct com temp;
        temp.real = n1.real+n2.real;
        temp.img = n1.img+n2.img;

        return temp;
}

