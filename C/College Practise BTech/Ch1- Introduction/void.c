// I'm writing this to check differece between int main & void main.

#include <stdio.h>
// Below section have int main code ending with return0
int main()
{

    printf("\n");
    printf("This C Programm uses\n");
    printf("int main (){ \n");
    printf("return0;\n");
    printf("}\n");
    printf("Type C programm structure\n");

    return 0;
}
// Below section have void main code ending without return0

void main()
{

    printf("\n");
    printf("This C Programm uses\n");
    printf("void main (){ \n");
    printf("withou 'return0;'\n");
    printf("}\n");
    printf("Type C programm structure\n");

    
}
