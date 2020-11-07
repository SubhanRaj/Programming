#include <stdio.h>
/* This program contains Integers, Real Variables
& Character variables*/


int main()
{
    int a = 4;
    
    // int b = 8.69; 
    /*This is not recommended because 8.69 is a real variable, not an integer*/ 

    float b = 7.5;
    char c = 'B';

    printf ("The Value of a is %d \n" ,a ); 
    /*or*/
    printf ("The Value of b is %f \n" ,b );
    /*or*/
    printf ("The Value of c is %c \n" ,c );


    return 0;
}