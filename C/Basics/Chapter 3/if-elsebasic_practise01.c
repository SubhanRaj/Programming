#include <stdio.h>

// This programm use relational operations in C language to tell that they can drive or not

int main()
{
    int age;

    printf("\n");
    printf("Welcome to DL genration system\n");
    printf("Please enter your age to proceed-\n");
    scanf("%d", &age);

    printf("Congratulations for completing %d years of your age,\n", age);

    
    
    if (age < 90)
    {
        printf("Congratulations you can drive.\n");
    }
    

    else
    {
        printf("Sorry buddy, you can't drive.\n");
    }

    if (age == 50)
    {
        printf("Congratulations for completing 50 years of your life.");
    }
    if (age >= 100)
    {
        printf("You liven a century, Congratulations.");
    }

    printf("\n");

    return 0;
}