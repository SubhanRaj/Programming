#include <stdio.h>

int main()
{
    int i = 10;
    int j = i;
    int a = 2;
    int l = a + j - i;
    int k = (a + j + i);
    int m = k / 3;

    printf("\n");
    printf("The answer will be %d\n", l);
    printf("And its reverse will be %d\n", k);
    printf("and average will be %d\n", m);
    printf("\n");
    return 0;
}

