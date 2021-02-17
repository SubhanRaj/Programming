#include <stdio.h> 

int main(){
    char pass;

    printf("\n");
    printf("Did you passed the exam, enter 'y' for yes and 'n' for No ");
    scanf(" %c", &pass);
    

    if (pass == 'y')
    {
       printf("\nChal Bro, pawri karte hai. \n");
    }
    else if (pass == 'n')
    {
        printf ("\nKitni baar bole hai, pharayi-likhai karo \n");
        printf("IAS bano, lekin  nahi\n");
        printf("Inko toh pharna hi nahi hai.\n");
    }

    return 0;
}