#include <stdio.h>

// This programm tell that weather the inputed number is even or odd using If-else statements.

int main()
{

    int a, b;

    printf("\n");
    printf("Enter a number : \n");
    scanf("%d", &a);
    printf("\n");

    if (a % 2 == 0)
    {

        printf("%d is even\n", a);
    }
    else
    {
        printf("%d is odd\n", a);
    }
    

    return 0;
}