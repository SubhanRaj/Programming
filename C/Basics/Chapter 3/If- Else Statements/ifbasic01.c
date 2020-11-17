#include <stdio.h>

int main()
{

    int a, b;

    printf("\n");
    printf("Enetr a number : \n");
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