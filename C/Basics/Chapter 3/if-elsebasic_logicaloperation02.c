#include <stdio.h>

// This programm use relational, logical operations and specail priveliages in C language using if-else to tell that they can drive or not

int main()
{
    int age;
    int VIPpass;
    VIPpass = 1;

    printf("\n");
    printf("Welcome to DL genration system\n");
    printf("Please enter your age to proceed-\n");
    scanf("%d", &age);

    {

        printf("Congratulations for completing %d years of your age,\n", age);

        if ((age < 90 && age >= 18) || VIPpass == '1')
        {
            printf("Congratulations you are %d years old and you can drive.\n", age);
        }

        else
        {
            printf("Sorry, your age is %d, you can't drive.\n", age);
        }

        if (age == 50)
        {
            printf("Congratulations for completing 50 years of your life.");
        }

        printf("\n");

        return 0;
    }
}