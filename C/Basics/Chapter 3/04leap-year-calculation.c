#include <stdio.h>

// This programm is to determine weather an year entered  by user is laep year or not
// To determine whether a year is a leap year, follow these steps:

/*
1.  If the year is evenly divisible by 4, go to step 2. Otherwise, go to step 5.
2.  If the year is evenly divisible by 100, go to step 3. Otherwise, go to step 4.
3.  If the year is evenly divisible by 400, go to step 4. Otherwise, go to step 5.
4.  The year is a leap year (it has 366 days).
5.  The year is not a leap year (it has 365 days).                                     */

int main()
{

    int year;

    printf("\n");
    printf("Enter any year\n");
    scanf("%d", &year);
    printf("The year enterd by you is %d \n", year);

    // leap year if perfectly visible by 400
    if (year % 400 == 0)
    {
        printf("%d is a leap year. \n", year);
    }
    /* not a leap year if divisible by 100
       but not divisible by 400 */
    else if (year % 100 == 0)
    {
        printf("%d is not a leap year. \n", year);
    }
    // leap year if not divisible by 100
    // but divisible by 4
    else if (year % 4 == 0)
    {
        printf("%d is a leap year. \n", year);
    }
    // all other years are not leap year
    else
    {
        printf("%d is not a leap year. \n", year);
    }

    return 0;
}