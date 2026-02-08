#include <iostream>
using namespace std;

int main()
{
    int num = 5;
    int Guess;

    cout << "####---- Number Guessing Game ----####" << endl;
    cout << "Enter a number between 1 to 10" << endl;

    while (true)
    {
        cout << "Enter your guess: ";
        cin >> Guess;

        if (Guess == num)
        {
            cout << "You guessed it right!" << endl;
            break;
        }
        else if (Guess > num)
        {
            cout << "Number is smaller" << endl;
        }
        else
        {
            cout << "Number is bigger" << endl;
        }
    }

    return 0;
}
