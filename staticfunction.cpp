#include <iostream>
using namespace std;

class Calculator {
public:
    static int add(int a, int b) {
        return a + b;
    }
    
    static int multiply(int a, int b) {
        return a * b;
    }

    static int subtract(int a, int b) {
        return a - b;
    }

    static float divide(float a, float b) {
        if (b == 0) {
            cout << "Error: Division by zero!" << endl;
            return 0;
        }
        return a / b;
    }
};

int main() {
    cout << "5 + 3 = " << Calculator::add(5, 3) << endl;
    cout << "5 * 3 = " << Calculator::multiply(5, 3) << endl;
    cout << "5 - 3 = " << Calculator::subtract(5, 3) << endl;
    cout << "5 / 3 = " << Calculator::divide(5,3) << endl;
    return 0;
}
