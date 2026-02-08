#include <iostream>
using namespace std;

int main()
{
    float c, f;
    int choice;

    cout << "####---- Temperature Converter ----####" << endl;
    cout << "1. Celsius to Fahrenheit" << endl;
    cout << "2. Fahrenheit to Celsius" << endl;

    cout << "Enter choice 1 or 2: ";
    cin >> choice;

    if (choice == 1)
    {
        cout << "Enter temperature in Celsius: ";
        cin >> c;

        f = (c * 9 / 5) + 32;
        cout << "Temperature in Fahrenheit is = " << f << endl;
    }
    else if (choice == 2)
    {
        cout << "Enter temperature in Fahrenheit: ";
        cin >> f;

        c = (f - 32) * 5 / 9;
        cout << "Temperature in Celsius is = " << c << endl;
    }
    else
    {
        cout << "Invalid choice!" << endl;
    }

    return 0;
}
