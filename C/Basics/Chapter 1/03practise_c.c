#include <stdio.h>
// This programm converts Degree Celsius to Fahrenheit and Kelvin by taking input from the user.
// Formula- (°C × 9/5) + 32 = °F
//          (°C + 273.15 = K)

int main()
{
    float celsius;
    float far = (celsius * 9 / 5) + 32;
    float k = (celsius + 273);

    printf("Enter the temprature in Degree Celsius\n");
    scanf("%f", &celsius);
    printf("\n");
    printf("And the same temprature in Fahrenheit will be %f F\n", (celsius * 9 / 5) + 32);
    printf("And the same temprature in Kelvin will be %f K\n", celsius + 273);

    return 0;
}

