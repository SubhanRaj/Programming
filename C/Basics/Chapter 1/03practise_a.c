#include <stdio.h>
// This programm converts Degree Celsius to Fahrenheit from pre-given values
// Formula- (°C × 9/5) + 32 = °F

int main(){
    float celsius = 37;
    float far = (celsius * 9 / 5) + 32;

    printf("\n");
    printf("The Temprature of Human Body in celsius is %f\n", celsius);
    printf("And the same temprature in Fahrenheit will be %f\n", far);
    

    return 0;
}