#include <stdio.h>

int main()
{

    int a, square, cube;
    printf("\n");
    printf("Enter a -");
    scanf("%d", &a);
    printf("\n");
    square = a * a;
    cube = a * a * a;

    printf("Suqare = %d \n", square);
    printf("cube = %d \n", cube);

    return 0;
}