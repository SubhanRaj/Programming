#include <stdio.h> 

int main(){
    
    int x = 2;
    int y = 3;

    printf ("\n");

    printf (" The value of 3*x - 8*y is %d\n", 3*x - 8*y);
    printf(" The value of 3*x / 8*y is %d\n", 8* y / 3 * x);

    

    // printf(" The value of 3*x / 8*y is %d\n", 8 * y / 3 * x);
    // This gives wrong answer 24/6 according to BODMAS
    printf("\n");

    return 0;
}