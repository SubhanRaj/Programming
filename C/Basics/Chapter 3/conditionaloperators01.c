#include <stdio.h>

int main()
{
    int a;
    printf("Enter a number-\n");
    scanf("%d", &a);

    // One liner if-else
    printf("\n");
    (a < 5 || a ==5) ? printf("A is less than or equal to 5\n") : printf("A is greater than 5\n");
    return 0;
}