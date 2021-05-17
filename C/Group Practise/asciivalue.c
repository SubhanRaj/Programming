#include <stdio.h>

// This C Program prints the ASCII value of a given character

int main()
{

    int n;
    char ch;
    printf("Enter the value of 'N' \n \n");
    scanf("%d", &n);
    printf("Enter the character: \n\n");
    scanf("%c", &ch);

    printf("The equivalent character : %c \n\n", n);
    printf("and, thr equivalent ASCII no.: %d \n\n", ch);

    return 0;
}