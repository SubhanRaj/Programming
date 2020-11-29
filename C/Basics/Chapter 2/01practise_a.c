#include <stdio.h>

int main()
{

    // Q3. Write a programm to check wheather a number is divisible by 97 or not.

    int num;

    printf("\n");

    printf("Enter the number\n");
    scanf("%d", &num);

    printf("Divisibility Test returns : %d\n", 97 % num);

    printf("\n");

    // Q4. Explain step by step evaluation of 3*x/y -z + k, where x= 2, y =3, z = 3, k =1

    int x = 2, y = 3, z = 3, k = 1;
    
    int result = 3 * x / y - z + k + 34;

    // 3 * 2/ 3 - 3 + 1 + 34
    // 6/3 - 3 + 1 + 34
    // 2 - 3 + 1 + 34
    // - 1 + 1 + 34
    // 0 + 34

    printf("\n");
    printf("The value of  a = 3*x/y - z + k  will be %d \n", result);
    printf("\n");

    return 0;
}