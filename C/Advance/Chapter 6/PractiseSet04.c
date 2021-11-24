/* Write a program using a function which calculates the sum and average of two numbers.
Use pointers and print the value of sum and average in main()*/

#include <stdio.h>
void sumAndAvg(int a, int b, int *sum, float *avg)
{
    *sum = a + b;
    *avg = (float)*sum / 2;
    // We have returend value from a void function using pointers
}
int main()
{
    int i, j, sum;
    float avg;
    printf("\nEnter a and b: ");
    scanf("%d", &i);
    scanf("%d", &j);
    sumAndAvg(i, j, &sum, &avg);
    printf("\nThe sum of %d and %d is %d\n", i, j, sum);
    printf("The average of %d and %d is %f\n", i, j, avg);

    return 0;
}