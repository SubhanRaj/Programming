// Pointer Arthematic
#include <stdio.h>

int main()
{
    // Incrementing the value of pointer

    int i = 0;
    int *ptr = &i;
    printf("The value of ptr initialy is %u\n", ptr);
    printf("Now incrementing the value\n");
    ptr++;
    printf("The value of prt after incrementing is %u\n", ptr);
    // Decrementing the value
    printf("Now decrementing the value\n");
    ptr--;
    printf("The value of prt after decrementing is %u\n", ptr);

    return 0;
}