/* Welcome to Mirzapur */
// Likha Kise hai ye?
// Hum hai King of Mirzapur, aur hum jab cahe jaha cahe thok dete hai, samjhe apshabd?

#include <stdio.h>

int katta;
int barfi;
int kaleen;
int choice;
int kattaprice;
int barfiprice;
// int ch1 ;
// int ch2 ;
// int ch3 ;
// int ch4 ;
// int ch5 ;

int main()
{

    printf("\n");
    printf("Yaha kahe aye ho? \n");
    printf("Katte ke liye 1 dabaye, Barfi ke liye 2 aur Kaleen ke liye 3 \n");
    scanf("%d", &choice);

    if (choice == 1)
    {
        printf("Katta loge? \n");
        printf("Kitne Wala cahiyey? \n");
        printf("1500 wale ke liye 1, 2500 wale ke liye 2, 5000 wale ke liye 3 aur Videshi ka order lagta hai, samjhe BSDK? Uke liye 5 daba BC \n");
        scanf("%d", &kattaprice);

        if (kattaprice == 1)
        {
            printf("Maqbool isko ek 1500 wala katta de do \n");
        }
        else if (kattaprice == 2)
        {
            printf("Maqbool isko ek 2500 wala katta de do \n");
        }
        else if (kattaprice == 3)
        {
            printf("Yeh ameer hai, inko 5000 wala de do maqbool \n");
        }
        else if (kattaprice == 5)
        {
            printf("Are inki khatirdari karo, aur ek videshi ka order de do, samjhe? \n");
        }
    }
    else if (choice == 2)
    {
        printf("\n");
        printf("Barfi lenihai? \n");
        printf("Kitni cahiyey? \n");
        printf("Jinte ki cahiyey utna paisa daal do \n");
        scanf("%d", &barfiprice);
        printf("\n");
        if (barfiprice <= 100)
        {
            printf("BSDK %d ki barfi ke liye tum humare darwaje par chale aye \n", barfiprice);
            printf("Nikal ***** Pahli furast me nikal \n");
        }
        else if (barfiprice >= 100)
        {
            printf("Suno, isko %d ki barfi de do. \n", barfiprice);
        }
    }
   
    else if (choice == 3)
    {
        printf("\n");
        printf("Acha yeh kaleen lene aye hai? \n");
        printf("Le jake isko Kaleen dikha do maqbool \n");
    }
    else if (choice >= 4)
    {
        printf("\n");
        printf("Vishud Chuitya admi ho tum \n");
        printf("Jab 1 se 3 tak bola hai toh, tumne %d ku dala BSDK?", choice);
    }
    printf("\n");
    return 0;
}