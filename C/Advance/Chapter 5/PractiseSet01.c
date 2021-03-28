// C Porgram to find average of 3 numbers using funtions

#include <stdio.h>

float average(float a, float b, float c);
int main()
{
    printf("\nThis C program finds the average of 3 numbers\n");
    float a,b,c;
    printf("\nEnter Number a: ");
    scanf("%f", &a);
    printf("\nEnter Number b: ");
    scanf("%f", &b);
    printf("\nEnter Number c: ");
    scanf("%f", &c);

    printf("\nThe average of a, b and c is %f\n", average(a,b,c));

    return 0;
}
float average(float a, float b, float c)
{
    float result;
    result = (a+b+c) / 3;
    return result;
    
}
