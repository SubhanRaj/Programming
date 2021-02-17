/* finding square and cube of any programmer : vaibhav goswami */

#include <stdio.h>
int main()
{

    int a, b = 2, c = 3, square, cube;

    printf("Enter a:");

    scanf("%d", &a);
    square = pow(a, b);

    cube = pow(a, c);

    printf("square=%d\n", square);

    printf("cube=%d\n", cube);

    return 0;
}