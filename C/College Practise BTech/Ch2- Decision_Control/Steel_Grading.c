/* A C program to grade the steel on basis of certain pre-defined and user given parameters. */
// Author : Subhan Raj

// Parameters for Grading Steel:
// (i) Hardness > 50
// (ii) Carbon Content < 0.7
// (iii) Tensile Strength > 5600

/* Grading Scale are as follows */

// 10- All Conditions are true
// 9- Condition (i) & (ii) are true
// 8- Condition (ii) & (iii) are true
// 7- Condition (i) & (iii) are true
// 6- If Any of the one condition is true
// 5 If all conditions are false

#include <stdio.h>

int main()
{
    int hardness, ts, grade;
    float cc;
    char choice;

    printf("\nEnter the Hardness of Steel ");
    scanf("%d", &hardness);
    printf("\nEnter the Tensile Strength of Steel ");
    scanf("%d", &ts);
    printf("\nEnter the Carbon Content of Steel ");
    scanf("%f", &cc);

    printf("\nYour Inputed values of Hardness, Tensile Strenght and Carbon Content are \n");
    printf("%d, %d and %f respectively.\n", hardness, ts, cc);

    /* Below are all conditions for Grading */

    if (hardness > 50 && ts > 5600 && cc < 0.7)
    {
        printf("\nGrading of this steel is 10\n");
    }
    else if (hardness > 50 && cc < 0.7)
    {
        printf("\nGrading of this steel is 9\n");
    }
    else if (ts > 5600 && cc < 0.7)
    {
        printf("\nGrading of this steel is 8\n");
    }
    else if (hardness > 50 && ts > 5600)
    {
        printf("\nGrading of this steel is 7\n");
    }
    else if (hardness > 50 || ts > 5600 || cc < 0.7)
    {
        printf("\nGrading of this Steel is 6\n");
    }
    else
    {
        printf("\nThe grading of this steel is 5\n");
    }

    return 0;
}