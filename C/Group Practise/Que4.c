#include <stdio.h> 

int main(){
    int num1, num2;
    printf("\nC program to find greates of two numbers");
    printf("\nEnter number 'a': ");
    scanf("%d", &num1);
    printf("Enter number 'b': ");
    scanf("%d", &num2);

    if (num1 > num2 && num2 < num1)
    {
        printf("\n'a' is greated than 'b'\n");
    }
    else if (num1 < num2 && num2 > num1)
    {
        printf("\n'b' is greated than 'a'\n");
    }
    
    return 0;
}