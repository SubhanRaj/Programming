// Array Initialization
#include <stdio.h>

int main()
{
    // Using mannual method
    int a[] = {34, 65, 75, 65};
    printf("\nThe value of a[0] is %d\n", a[0]);
    printf("The value of a[0] is %d\n", a[1]);
    printf("The value of a[0] is %d\n", a[2]);
    printf("The value of a[0] is %d\n", a[3]);

    // Using loops to print

    float mark[] = {15.62, 65.67, 24.67, 78.06, 36.632};
    for (int i = 0; i < 5; i++)
    {
        printf("The marks of student %d is %f\n", i + 1, mark[i]);
    }

    return 0;
}