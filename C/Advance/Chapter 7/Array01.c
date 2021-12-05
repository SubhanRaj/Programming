#include <stdio.h>

int main()
{
    int marks[5];

    printf("\nThis C program takes and prints marks of 5 students using Arrays.\n");
    for (int i = 0; i < 5; i++)
    {
        printf("\nEnter the marks obtained by student %d: ", i + 1);
        scanf("%d", &marks[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("\nThe marks obtained by student %d is %d.\n", i + 1, marks[i]);
    }

    return 0;
}
 