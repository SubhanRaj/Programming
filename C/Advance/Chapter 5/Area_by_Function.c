#include <stdio.h> 
#include <math.h>


int main(){
    int side;
    printf("\n");
    printf("Enter the Value of side : ");
    scanf ("%d", &side);
    printf("The area of the square having side %d will be %f\n", side, pow (side,2));
    return 0;
}