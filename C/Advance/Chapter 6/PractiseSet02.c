#include <stdio.h>
/* WAP that have a variable i. Print the address of i, pass this address to a function
and prints its address. 
Are these address same? Why? */
// Author : Subhan Raj
void printAdd(int a);
int main()
{

    int i;
    printf("\nEnter the Value of i : ");
    scanf("%d", &i);
    printf("\nThe value of variable i is %d\n", i);
    printAdd(i);
    printf("\nThe address of variable i is %u\n", &i);
    return 0;
}
void printAdd(int a)
{
    printf("\nThe address of variable a is %u\n", &a);
} 