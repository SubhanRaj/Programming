#include <stdio.h>

int main()
{
    int a;
    printf("Enter any value of 'a' \n");
    scanf("%d", &a);
    printf("\n");

    if (a >= 0 && a < 25)
    {
        while (a <= 25)
        {
            printf("%d\n", a);
            a++;
        }
    }
    else
    {
        printf("Invalid Input \n");
    }

    return 0;
}