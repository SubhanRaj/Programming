// Question1: WAP that accepts the marks of 5 subjects and finds the sum and percentage marks obtained by the student.

// Objective: Create a C program that can accept the marks of 5 subjects and finds the sum and percentage obtained by the student.
// Author: Subhan Raj
/*---------------Code---------------*/

#include <stdio.h>
#define mm 500 // 'mm' means Maximum Marks in total
int main()
{

    int sub[5];                // This int array collects marks as input
    float sum = 0, percentage; // These float variables store and gives output

    printf("This C program calculates the Sum and percentage from the value entered by student\n");
    printf("Maximum Marks in each Subject = 100\n");
    printf("\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Please Enter Marks of Subject %d- ", i + 1);
        scanf("%d", &sub[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        sum = sum + sub[i];
    };                           // Calculation of Sum by adding marks of all subject.
    percentage = sum / mm * 100; // Calculation of percentage

    printf("\nThe total Marks obtained is %f and hence your percentage is %f. \n", sum, percentage);

    return 0;
}

// Output of the Above program-

/* This C program calculates the Sum and percentage from the value entered by the student
Maximum Marks in each Subject = 100

Please Enter Marks of Subject 1- 15
Please Enter Marks of Subject 2- 65
Please Enter Marks of Subject 3- 35
Please Enter Marks of Subject 4- 96
Please Enter Marks of Subject 5- 35

The total Marks obtained is 246.000000 and hence your percentage is 49.200001. */