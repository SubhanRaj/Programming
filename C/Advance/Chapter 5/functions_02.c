#include <stdio.h>
// Sum of a finction which takes a & b as inout and returns an integer as output
int sum(int a, int b); // Function Prototype Declaration

int main()
{
    int /*a,b */ c;
    // printf(" Enter value of a and b - ");
    // scanf ("%d %d", &a, &b);
    c = sum(2, 15);
    printf("The value of c is %d \n", c);

    return 0;
}
int sum(int a, int b)
{
    int result;
    result = a + b;
    return result;
}