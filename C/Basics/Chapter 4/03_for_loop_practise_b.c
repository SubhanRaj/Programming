#include <stdio.h>

// This is a decrementing for loop which takes the value of n from user

int main()
{

    int i;

    printf("\n");

    printf("Enter the value of n- \n");
    scanf("%d", &i);
    printf("\n");
    for (i; i; i--)
    {
        printf(" %d \n", i);
    }
    printf("\n");
    return 0;
}