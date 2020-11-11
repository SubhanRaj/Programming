#include <stdio.h> 
// This programm calculates area of rectange from inpput provided by user.

int main(){
    
    float length, breadth ;

    printf("What is the length of rectangele?\n");
    scanf("%f" ,&length);

    printf("what is the breadth of rectangle?\n");
    scanf("%f" ,&breadth);

    printf("The area of rectange for given values is %f \n", length*breadth);

    return 0;
}