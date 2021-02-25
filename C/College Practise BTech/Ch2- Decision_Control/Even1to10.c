#include <stdio.h>
// A C Program which prints all Even Numbers between 1 to n.
int main()
{
    int i=0 ;
    int n;
    printf("Enter the value upto which you want even numbers- ");
    scanf ("%d", &n);

    while (i++ < n)
    {
        if (i%2 == 0)
        printf("\n%d is even number\n", i++);

    }

    return 0;
}