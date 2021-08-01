// Datatypes in C++
#include <bits/stdc++.h> //This is master include file for all C++ standard library headers
using namespace std;

int main()
{
    // int
    // range of signed integer is -2147483648 to 2147483647
    // range of unsigned integer is 0 to 4294967295
    // char
    // range of signed char is -128 to 127
    // range of unsigned char is 0 to 255
    // float
    // range of float is -3.40282347e+38 to 3.40282347e+38
    // double
    // range of double is -1.7976931348623157e+308 to 1.7976931348623157e+308
    // long double
    // range of long double is -1.7976931348623157e+308 to 1.7976931348623157e+308
    // bool
    // range of bool is 0 to 1 or false to true
    // long
    // range of long is -9223372036854775808 to 9223372036854775807
    // short
    // range of short is -32768 to 32767

    // Declaration of variables

    int a;
    cout << sizeof(a) << endl;

    float f;
    cout << sizeof(f) << endl;

    char c;
    cout << sizeof(c) << endl;

    bool b;
    cout << sizeof(b) << endl;

    double d;
    cout << sizeof(d) << endl;

    long l;
    cout << sizeof(l) << endl;

    short s;
    cout << sizeof(s) << endl;

    int m = INT_MAX;
    cout << sizeof(m) << endl;
    cout << m << endl;
    cout << m + 1 << endl; // overflow

    return 0;
}