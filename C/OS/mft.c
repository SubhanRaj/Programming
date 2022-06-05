// MFT
#include <stdio.h>
int main()
{
    int i, m, n, tot, s[20];
    printf("Enter total memory size: ");
    scanf("%d", &tot);
    printf("Enter no. of pages: ");
    scanf("%d", &n);
    printf("Enter memory for OS: ");
    scanf("%d", &m);
    for (i = 0; i < n; i++)
    {
        printf("Enter size of page %d:", i + 1);
        scanf("%d", &s[i]);
    }
    tot = tot - m;
    for (i = 0; i < n; i++)
    {
        if (tot >= s[i])
        {
            printf("Allocate page %d\n", i + 1);
            tot = tot - s[i];
        }
        else
            printf("process p%d is blocked\n", i + 1);
    }
    printf("External Fragmentation is=%d", tot);
}
