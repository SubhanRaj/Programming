#include <stdio.h>

int main()
{
    int num;

    printf("\n");
    printf("Enter a real number\n");
    scanf("%d", &num);
    printf("\n");

    if (num == 1)
    {
        printf("Entered number is 1\n");
    }
    else if (num == 2)
    {
        printf("Entered number is 2\n");
    }
    else if (num == 3)
    {
        printf("Entered number is 3\n");
    }
    else if (num == 4)
    {
        printf("Entered number is 4\n");
    }
    else if (num == 5)
    {
        printf("Entered number is 5\n");
    }
    else if (num == 6)
    {
        printf("Entered number is 7\n");
    }
    else if (num == 7)
    {
        printf("Entered number is 7\n");
    }
    else if (num == 8)
    {
        printf("Entered number is 8\n");
    }
    else if (num == 9)
    {
        printf("Entered number is 9\n");
    }
    else if (num == 10)
    {
        printf("Entered number is 10\n");
    }
    else if (num == 100)
    {
        printf("Entered number is 100\n");
    }
    else if (num > 10 && num < 100)
    {
        printf("The entered number is above 10 and below 100\n");
    }
    else if (num > 100 && num < 1000)
    {
        printf("The entered number is above 100 and below 1000\n");
    }
    else if (num > 1000 && num < 10000)
    {
        printf("The entered number is above 1000 and below 10000\n");
    }
    else
    {
        printf("Enter below 10000\n");
    }

    printf("\n");

    return 0;
}