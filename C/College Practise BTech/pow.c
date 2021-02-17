#include <stdio.h>

int main()
{

    int a, b, c;
    int square, cube;

    printf("Enter a -");
    scanf("%d \n", &a);
    printf("Enter b -");
    scanf("%d \n", &b);
    printf("Enter c -");
    scanf("%d \n", &c);

    square = pow(a, b);
    cube = pow(a, c);

    printf("Suqare = %d", square);
    printf("cube = %d", cube);

    return 0;
}