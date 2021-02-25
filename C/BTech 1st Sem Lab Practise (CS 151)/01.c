// Question: WAP that accepts the marks of 5 subjects and finds the sum and percentage marks obtained by the student.

// Objective: Create a C program that can accept the marks of 5 subjects and finds the sum and percentage obtained by the student.
// Author: Subhan Raj
/*---------------Code---------------*/

#include <stdio.h>
#define mm 500 // 'mm' means Maximum Marks in total
int main()
{

    float sub1, sub2, sub3, sub4, sub5; // These float variables collects marks as input
    float sum, percentage;              // These float variables store and gives output

    printf("This C program calculates the Sum and percentage from the value entered by student\n");
    printf("Maximum Marks in each Subject = 100\n");
    printf("\n");
    printf("Please Enter Marks of Subject 1- ");
    scanf("%f", &sub1);
    printf("Please Enter Marks of Subject 2- ");
    scanf("%f", &sub2);
    printf("Please Enter Marks of Subject 3- ");
    scanf("%f", &sub3);
    printf("Please Enter Marks of Subject 4- ");
    scanf("%f", &sub4);
    printf("Please Enter Marks of Subject 5- ");
    scanf("%f", &sub5);

    sum = sub1 + sub2 + sub3 + sub4 + sub5; // Calculation of Sum by adding marks of all subject.
    percentage = sum / mm * 100;            // Calculation of percentage

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