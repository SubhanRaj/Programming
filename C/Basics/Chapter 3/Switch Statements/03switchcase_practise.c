#include <stdio.h>
#include <math.h>

//A C Program to find out whether a student is passed or fail.
// It requires total 40% in total and at least 33% in each subject to pass.
//Assuming 3 subjects and taking marks as input from user, this programm is designed.

int main()
{

    int hindi, english, physics, chemistry, math;

    int total;

    printf("\n");
    printf("Welcome to result declaration system\n");
    printf("\n");

    printf("Enter marks obtained in physics - \n");
    scanf("%d", &physics);
    printf("Enter marks obtained in Chemistry- \n");
    scanf("%d", &chemistry);
    printf("Enter marks obtained in math- \n");
    scanf("%d", &math);
    printf("Enter marks obtained in hindi- \n");
    scanf("%d", &hindi);
    printf("Enter marks obtained in English- \n");
    scanf("%d", &english);

    total = (hindi + english + physics + chemistry + math) / 5;

    printf("Your marks in  physics, Chemisty, Math, Hindi and English are %d, %d, %d, %d, %d respectively.\n", physics, chemistry, math, hindi, english);
    printf("and your total percentage is %d \n", total);

    if (total >= 40 || physics < 33 || chemistry < 33 || math < 33 || hindi < 33 || english < 33)
    {
        printf("You are failed in this test. \n");
    }
    else
    {
        printf("Congratulations, You passed this test. \n");
    }
    
    
    

    return 0;
}