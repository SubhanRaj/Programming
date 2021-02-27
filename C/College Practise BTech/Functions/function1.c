#include <stdio.h>

/* An example function that takes two parameters 'x' and 'y'
 as input and returns max of two input numbers */
int max(int x, int y)
{
    if (x > y)
        return x;
    else
        return y;
}

// main function that doesn't receive any parameter and
// returns integer.
int main(void)
{
    int a, b;
    printf("\nEnter value of 'a'-");
    scanf("%d", &a);
    printf("\nEnter value of 'b'-");
    scanf("%d", &b);

    // Calling above function to find max of 'a' and 'b'
    int m = max(a, b);

    printf("\n maximium of two inputs is %d\n", m);
    return 0;
}
