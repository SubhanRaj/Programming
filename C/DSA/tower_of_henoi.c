// C program to solve the problem of Tower of Hanoi in Stack Data Structure using Recursion

#include <stdio.h>
#include <stdlib.h>

int tower_of_hanoi(int n, char from_rod, char to_rod, char aux_rod)
{
    if (n == 1)
    {
        printf("\nMove disk 1 from rod %c to rod %c", from_rod, to_rod);
        return 1;
    }
    else
    {
        tower_of_hanoi(n - 1, from_rod, aux_rod, to_rod);
        printf("\nMove disk %d from rod %c to rod %c", n, from_rod, to_rod);
        tower_of_hanoi(n - 1, aux_rod, to_rod, from_rod);
    }
}

int main()
{
    int n;
    printf("\nEnter the number of disks: ");
    scanf("%d", &n);
    tower_of_hanoi(n, 'A', 'C', 'B');
    return 0;
}