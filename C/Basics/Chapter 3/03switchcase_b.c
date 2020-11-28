#include <stdio.h> 

int main(){
    
    int Yes = 1;
    int rating;

    printf("\n");
    printf("Would you like to rate us? Please Enter 1 for Yes and 2 for No-\n");
    scanf("%d", &Yes);
    

    if (Yes == 1)
    {
        printf("Please take a second to rate us\n");
        printf("Give your rating between 1-5 where 1 is poorest and 5 is best\n");
        scanf("%d", &rating);
        

        switch (rating)
        {
        case 1:
            printf("Your rating is 1\n");
            break;

        case 2:
            printf("Your rating is 2\n");
            break;

        case 3:
            printf("Your rating is 3\n");
            break;

        case 4:
            printf("Your rating is 4\n");
            break;

        case 5:
            printf("Your rating is 5\n");
            break;

        default:
            printf("Invalid rating.\n");
            
        }

        
    }
    

    printf("Thanks for visiting us, have a nice day\n");
    printf("\n");
    

    return 0;
}