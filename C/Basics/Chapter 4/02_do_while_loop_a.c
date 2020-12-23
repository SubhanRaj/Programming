#include <stdio.h>
// do-while loop first executes the code and then check the conditions.
int main()
{

    int i = 0;
    printf("\n");

    do {
        printf("The number %d is an integer. \n" , i+1);
        i++;

    }
    while(i <= 25);

    printf("\n");

    return 0;
}