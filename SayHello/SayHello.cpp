// SayHello.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
using namespace std;
#include <iostream>


int main()
{
    cout << "Hello World!\n";
    int first = 10;
    int second = 20;
    string result;
    result = (first == second) ? "equal" : "not equal";
    cout << result << endl;
    first = 20;
    result = (first == second) ? "equal" : "not equal";
    cout << result << endl;
    cout << "next we will practice geeting input from the user." << endl;
    string anme;
    cout << "Please type in your name:" << endl;
    cin >> anme;
    cout << "your name is: " << anme << endl;
    int third = 30;
    int fourth = 10;
    return 0;
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
