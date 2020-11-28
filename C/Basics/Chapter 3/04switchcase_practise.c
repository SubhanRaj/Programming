#include <stdio.h>

// This C program is a choise guess

int main()
{

    int fruit;
    int vegetables;
    int fastfood;
    

    printf("Welcome dear \n");
    printf("Did you eat fruits?\n");
    printf("Enter '1' for Yes and '2' for No \n");
    scanf("%d", &fruit);

    printf("Did you eat Vegetables?\n");
    printf("Enter '1' for Yes and '2' for No \n");
    scanf("%d", &vegetables);

    printf("Did you eat Junkfood too??\n");
    printf("Enter '1' for Yes and '2' for No \n");
    scanf("%d", &fastfood);

    if ( fruit == 1 && vegetables == 1){
        printf("\n");
        printf("Wow, your diet is perfect.");
    }


    return 0;
}