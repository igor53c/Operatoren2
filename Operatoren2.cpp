// Operatoren2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

void main()
{
    double a = 13.4, b = 22.6, c = 19.5;

    cout << "a: " << a << ", b: " << b << ", c: " << c << endl;

    cout.setf(ios::boolalpha);

    cout << "a > b: " << (a > b) << ", b >= c: " << (b >= c) << ", c < a: " << (c < a)
         << ", a == b: " << (a == b) << ", a != b: " << (a != b) << endl;

    bool bo;

    bo = (a < b) && (b < c);

    cout << "bo: " << bo << endl;

    bo = (a < b) || (b < c);

    cout << "bo: " << bo << endl;

    cout << "bo: " << !bo << endl;


















}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
