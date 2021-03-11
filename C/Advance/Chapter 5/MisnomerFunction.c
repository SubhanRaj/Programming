#include <stdio.h> 
// A misnomer C function
int change (int a);
int main(){
    
    int b = 22;
    change (b);
    printf("\n'b' is %d\n", b);
    return 0;
}
int change (int a)
{
    a = 77;
    return 0;
}