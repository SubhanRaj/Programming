// Question6: Write a program that checks whether the two numbers entered by the user are equal or not.
// Objective: To create a C program that checks whether the two numbers entered by the user are equal or not.

/*---------------Code---------------*/
// A C program that checks whether the two numbers entered by the user are equal or not.
// Author: Subhan Raj
#include <stdio.h> 

int main(){
    float num1,num2;
    printf("\n");
    printf("This C program checks whether the two numbers entered by the user are equal or not.\n");
    printf("Enter First Number ");
    scanf("%f", &num1);
    printf("Enter Second Number ");
    scanf("%f", &num2);

    if (num1 == num2)
    {
        printf("\n%f and %f are equal.\n",num1, num2);
    }
    else if (num1 != num2)
    {
        printf("\n%f and %f are not equal.\n",num1, num2);
    }
    return 0;
}
// Output of the Above program-

// Case 1: Both numbers are equal
/*This C program checks whether the two numbers entered by the user are equal or not.
Enter First Number 75639
Enter Second Number 75639

75639.000000 and 75639.000000 are equal.*/

// Case 2: Both number are unequal

/*This C program checks whether the two numbers entered by the user are equal or not.
Enter First Number 75654 
Enter Second Number 95364

75654.000000 and 95364.000000 are not equal.*/