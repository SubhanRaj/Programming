// Question18: Write a program to print Armstrong numbers from 1 to 100.

// Objective: To create a C program that print Armstrong numbers from 1 to 100.
/*---------------Code---------------*/

// A C program that print Armstrong numbers from 1 to 100.
// Author: Subhan Raj

#include <math.h>
#include <stdio.h>
int main()
{
    int low = 1, high = 100, n, count = 0, r, result = 0, i;

for (n = low; n <high; n++);

{
    
    while (n !=0)
    {
        i = i/10;
        count++;
    
    }
    i = n;
    while (n != 0)
    {
        r = n%10;
        result = result + pow (r,count);
        n = n/10;
    }
}
printf("Armstrong number between 1 and 100 is %d", result);

return 0;
}