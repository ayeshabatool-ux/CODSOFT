#include <iostream>
using namespace std;

int main()
{
    int secretNumber = 42;
    int guess = 0;

    cout << "Welcome to the number guessing game" << endl;
    cout << "guess a number between 1 and 100" << endl;
    while (guess != secretNumber)
    {
        cout << "Enter your guess: ";
        cin >> guess;
        if (guess > secretNumber)
        {
            cout << "Too high, try again" << endl;
        }
        else if (guess < secretNumber)
        {
            cout << "Too low, try again" << endl;
        }
        else
        {
            cout << "Congratulations, you guessed the correct number!" << endl;
        }
    }
    return 0;
}