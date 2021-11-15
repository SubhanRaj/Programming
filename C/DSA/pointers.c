// Write a C program to print the address of a variable along with its value
#include <stdio.h>
int main()
{
    int a,*p;
    printf("Enter a number: ");
    scanf("%d", &a);
    p = &a;
    printf("Address of a: %p\n", &a);
    printf("Value of a: %d\n", a);
    printf("Address of p: %p\n", &p);
    printf("Value of p: %d\n", *p);

    return 0;
}