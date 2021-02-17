#include <stdio.h>
// A C program for displaying Days of week using switch case

int main()
{

    int day;
    printf("\nWhich day of week is today?");
    printf("\nEnter the week number ");
    scanf("%d", &day);
    printf("\n");

    switch (day)
    {
    case 1:
        printf("Today is Sunday which is %dst day of the weak.\n", day);
        break;
    case 2:
        printf("Today is Monday which is %dnd day of the weak.\n", day);
        break;
    case 3:
        printf("Today is Tuesday which is %drd day of the weak.\n", day);
        break;
    case 4:
        printf("Today is Wednesday which is %dth day of the weak.\n", day);
        break;
    case 5:
        printf("Today is Thursday which is %dth day of the weak.\n", day);
        break;
    case 6:
        printf("Today is Friday which is %dth day of the weak.\n", day);
        break;
    case 7:
        printf("Today is Satuday which is %dth day of the weak.\n", day);
        break;

    default:
        printf("Invalid Input \n");
        printf("Enter number between 1 to 7\n");
        break;
    }
    printf("\n");
    return 0;
}