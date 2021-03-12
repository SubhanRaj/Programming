#include <stdio.h>

int main()
{

    int i;
    int *j = &i;
    int **k;
    k = &j;
    printf("\nEnter the value of i: ");
    scanf("%d", &i);
    printf("\nAdd i = %u \n", &i);
    printf("Add j = %u \n", j);
    printf("Add j = %u \n", &j);
    printf("Add k = %u \n", &k);
    printf("Value i = %d \n", i);
    printf("Value j = %d \n", j);
    printf("Value i = %d \n", *(&i));
    printf("Value j = %d \n", *(j));
    printf("Value k = %d \n", *(k));

    return 0;
}