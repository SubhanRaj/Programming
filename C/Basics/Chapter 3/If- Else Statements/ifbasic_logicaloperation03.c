#include <stdio.h>
/* A logical C programm that can tell users that they can drive or not, using if-else statements 
and Relational and logical operators. */

int main()
{
    int age;
    int specialpass;

    printf("\n");
    printf("Hi!!!\n");
    printf("Welcome to NYC authority of Regulations\n");
    printf("\n");
    printf("Do you want to drive in NYC?\n");
    printf("Please enter your age below to check weather you can drive or not-\n");
    scanf("%d", &age);

    printf("Did you have any Special pass?\n");
    printf("Enter 1 for 'yes and 2 for 'no'\n");
    scanf("%d", &specialpass);

    if (age >= 18 && age < 90 || specialpass == 1)
    {
        printf("Congratulations You can drive\n");
    }
    else
    {
        printf("Sorry you cannot drive\n");
    }

    return 0;
}