#include <stdio.h>
// This program converts Degree Celsius to Fahrenheit by taking input from the user.
// Formula- (°C × 9/5) + 32 = °F

int main(){
    float celsius;
    float far = (celsius * 9 / 5) + 32;

    printf ("Enter the temprature in Degree Celsius\n");
    scanf ("%f", &celsius);
    printf ("\n");
    printf("And the same temprature in Fahrenheit will be %f\n", (celsius * 9 / 5) + 32);

    return 0;
}