#include <stdio.h>



int main()
{

    int age;
    int gender;
    int feedback;
    int rating;

    printf("\n");
    printf("Please enter your age-\n");
    scanf("%d", &age);
    printf("Enter your gender, 1 for male and 2 for female\n");
    scanf("%d", &gender);

    if (gender == 1)
    {
        printf("You are male\n");
        printf(",your age is %d \n", age);
        if (age >= 18)
        {
            printf("and You are an adult.\n");
            printf("\n");
        }
        else if (age < 18 && age >= 14)
        {
            printf("and You are a teenager.\n");
            printf("\n");
        }
        else if (age > 5 && age < 14)
        {
            printf("and You are a child.\n");
            printf("\n");
        }
        else if (age > 0 && age < 5)
        {
            printf("and You are a kid.\n");
            printf("\n");
        }
    }
    else if (gender == 2)
    {
        printf("You are female\n");
        printf(", your age is %d \n", age);
        if (age >= 18)
        {
            printf("and You are an adult.\n");
            printf("\n");
        }
        else if (age < 18 && age >= 14)
        {
            printf("and You are a teenager.\n");
            printf("\n");
        }
        else if (age > 5 && age < 14)
        {
            printf("and You are a child.\n");
            printf("\n");
        }
        else if (age > 0 && age < 5)
        {
            printf("and You are a kid.\n");
            printf("\n");
        }
    }
    else
    {
        printf("Invalid input");
        printf("\n");
    }
    printf("Did you like this system?\n");
    printf("Enter 1 for yes and 2 for no\n");
    scanf("%d", &feedback);

    if (feedback == 1)

    {
        printf("Please give us rating on scale of 1 -5\n");
        scanf("%d", &rating);

        switch (rating)
        {
        case 1:
            printf("Your rating is 1\n");
            break;

        case 2:
            printf("Your rating is 2\n");
            break;

        case 3:
            printf("Your rating is 3\n");
            break;

        case 4:
            printf("Your rating is 4\n");
            break;

        case 5:
            printf("Your rating is 5\n");
            break;

        default:
            printf("Invalid rating.\n");
        }
    }

    else if (feedback == 2)
    {
        printf("Soory for inconvinence\n");
    }

    printf("\n");

    return 0;
}