/* Consider a book shop which sells both books and video-tapes. Create a class know as media that storea the title
and price of a publication.*/

#include <iostream>
#include <cstring>
using namespace std;

class media // defining base class
{
protected:
    char title[50];
    float price;

public:
    media(char *s, float a)
    {
        strcpy(title, s);
        price = a;
    }
    virtual void display(){};
};

class book : public media // defining derived class 'book' which is derived from 'media'
{
    int pages;

public:
    book(char *s, float a, int p) : media(s, a) // constructor of derived class
    {
        pages = p;
    }
    void display();
};

class tape : public media // defining derived class 'tape' which is derived from 'media'
{
    float time;

public:
    tape(char *s, float a, float t) : media(s, a) // constructor of derived class
    {
        time = t;
    }
    void display();
};

void book ::display() // function to display book details
{
    cout << "\n Title: " << title;
    cout << "\n Pages: " << pages;
    cout << "\n Price: " << price;
}

void tape::display() // function to display tape details
{
    cout << "\n Title: " << title;
    cout << "\n Playtime: " << time;
    cout << "\n Price: " << price;
}

int main()
{
    char *title = new char[30]; // creating a array of characters using 'new' for storing title
    float price, time;
    int pages;

    //Book Details

    cout << "\n Enter Book Details \n";
    cout << "Title: ";
    cin >> title;
    cout << "Price: ";
    cin >> price;
    cout << "Pages: ";
    cin >> pages;

    book book1(title, price, pages);

    //Tape Details

    cout << "\n Enter Tape Details \n";
    cout << "Title: ";
    cin >> title;
    cout << "Price: ";
    cin >> price;
    cout << "Play time (mins): ";
    cin >> time;

    tape tape1(title, price, time);

    media *list[2];
    list[0] = &book1;
    list[1] = &tape1;

    cout << "\n Media Details";

    cout << "\n.....Book....";
    list[0]->display(); // display Book details
    cout << "\n.....Tape....";
    list[1]->display(); // display Tape details
    return 0;
}
