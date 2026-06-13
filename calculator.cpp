#include <iostream>
using namespace std;

int main()
{
    int a, b;
    char choice;

    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter second number: ";
    cin >> b;

    cout << "Enter operation (+, -, *, /): ";
    cin >> choice;

    if (choice == '+')
    {
        cout << "Answer = " << a + b;
    }
    else if (choice == '-')
    {
        cout << "Answer = " << a - b;
    }
    else if (choice == '*')
    {
        cout << "Answer = " << a * b;
    }
    else if (choice == '/')
    {
        cout << "Answer = " << a / b;
    }
    else
    {
        cout << "Invalid operation";
    }

    return 0;
}