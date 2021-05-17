#include <stdio.h>

// This C Program prints the ASCII value of a given character and a Character from Given ASCII Value
// Author : SubhanRaj

int main()
{

    char n;
    int ch;

    printf("\nEnter a Character:  \n \n");
    scanf("%c", &n);
    printf("The ASCII Value of character : %c = %d \n\n", n, n);

    printf("Enter the value of character \n\n");
    scanf("%d", &ch);
    printf("The ASCII character for value %d will be %c \n", ch, ch);

    return 0;
}