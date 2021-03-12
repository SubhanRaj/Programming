#include <stdio.h>
int sum(int a, int b);
int main()
{
    int a, b;
    printf("\nEnter the value of 'a': ");
    scanf("%d", &a);
    printf("\nEnter the value of 'b': ");
    scanf("%d", &b);
    printf("\nThe value of a & b is %d and %d\n", a, b);
    printf("\nThe value of sum of %d and %d is %d\n", a, b, sum(a, b));
    return 0;
}
int sum(int a, int b)
{
    return a + b;
}