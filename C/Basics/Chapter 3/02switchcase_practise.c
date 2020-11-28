#include <stdio.h>

int main()
{

    int a = 10;
    if (a = 11) /*here using single = will print "I'm 11" because single =  asign value of a = 11,
                 not cehcking is a is 11 or not, for that we need a == 11*/
    {
        printf("I'm 11\n");
    }
    else
    {
        printf("I'm not 11\n");
    }

    return 0;
}