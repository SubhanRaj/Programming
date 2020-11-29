#include <stdio.h> 
// This prgramm can tell that the entered character is lower case or not.
// Uses ASACII Value of Characters
// In ASCII 65 - 90 = Upper case letter 
// In ASCII 97- 122 = Lower case letter

int main(){

    // In ASCII 97- 122 = Lower case letter
    char ch;
    printf("\n");
    printf("Enter any Character- \n");
    scanf("%c", &ch);

    if ( ch <= 122 && ch >= 97)
    {
        printf("You have enterd %c which is a lower case character \n", ch);
    }
    else if ( ch <= 90 && ch >= 65)
    {
        printf("You have enterd %c which is an Upper case Character \n", ch);
    }
    else
    {
        printf("Invalid Input \n");
    }
    
    printf("\n");



    return 0;
}