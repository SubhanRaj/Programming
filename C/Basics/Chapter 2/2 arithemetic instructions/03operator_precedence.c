#include <stdio.h> 

int main(){
    
    int x = 4;
    int y = 9;

    printf ("\n");

    printf (" The value of 3*x - 8*y is %d\n", 3*x - 8*y);
    printf(" The value of 3*x - 8*y is %d\n", 3* (x - 8 * y));
    printf(" The value of 3*x - 8*y is %d\n", (3 * x) - (8 * y));
    printf("\n");

    return 0;
}