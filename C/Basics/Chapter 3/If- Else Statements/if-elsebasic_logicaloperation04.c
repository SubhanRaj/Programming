#include <stdio.h>
/* A reverse of ifbasic_logicaloperation03 which use NOT (!) */

int main()
{
    int age;
    int specialpass;
    int mood;

    printf("\n");
    printf("Hi!!!\n");
    printf("Welcome to authority of Regulations\n");
    printf("\n");
    printf("Do you want to drive? \n");
    printf("Enter 1 for 'yes' and 2 for 'no'\n");
    scanf("%d", &mood);
    if (mood == 1)
    {
        printf("Please enter your age below to check weather you can drive or not-\n");
        scanf("%d", &age);

        printf("Did you have any Special pass?\n");
        printf("Enter 1 for 'yes and 2 for 'no'\n");
        scanf("%d", &specialpass);

        if (age >= 18 && age < 90 || !(specialpass == 1))
        {
            printf("Congratulations You can drive\n");
        }
        else
        {
            printf("Sorry you cannot drive\n");
        }
    }
    else
    {
        printf("Than why are you here?\n");
    }

    return 0;
}