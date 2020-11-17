#include <stdio.h>
// This C Programm tells user that they can drive or not

int main()
{

    int age;

    printf("\n");
    printf("Welcome to Departement of Traffic control and regulations.\n");
    printf("Now you can chekc that you can drive leaglly or not by this C programm.\n");
    printf("Just follow simple stpes as indicated.\n");
    printf("\n");
    printf("\n");
    printf("Enter your age: \n");
    scanf("%d", &age);
    if (age > 18)
    {
        printf("Congratulations You can drive");
        printf("\n");
    }
    else
    {
        printf("\n");
        printf("Sorry, but you are Under-age");
    }

    printf("\n");
    printf("\n");

    return 0;
}