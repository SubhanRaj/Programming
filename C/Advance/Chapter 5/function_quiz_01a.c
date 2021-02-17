/* This C program greates user with Good Morning/Afternoon/Evening/Night 
by using loops, conditions and Functions */

// Author : Subhan Raj
#include <stdio.h>
void Good_Morning();
void Good_Afternoon();
void Good_Evening();

int main()
{

    printf("\n");

    Good_Morning();

    printf("\n");

    return 0;
}

void Good_Morning()
{
    printf("Good Morning Dear.\n");
    Good_Afternoon();
}
void Good_Afternoon()
{
    printf("Good Afternoon Dear \n");
    Good_Evening();
}
void Good_Evening()
{
    printf("Good Evening Dear.\n");
}
