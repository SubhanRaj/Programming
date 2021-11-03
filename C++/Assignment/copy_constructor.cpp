// Copy Constructor in C++

#include <iostream>
using namespace std;

class code
{
    int id;

public:
    code() {}
    code(int a)
    {
        id = a;
    }
    code(code &x)
    {
        id = x.id;
    }
    void display()
    {
        cout << id << endl;
    }
};
int main()
{
    code A(100);
    code B(A);
    code C = A;
    code D;
    D = A;

    cout << "\n Id of A: ";
    A.display();
    cout << "\n Id of B: ";
    B.display();
    cout << "\n Id of C: ";
    C.display();
    cout << "\n Id of D: ";
    D.display();
    return 0;
}