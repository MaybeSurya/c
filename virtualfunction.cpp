#include <iostream>
using namespace std;

void func1() {
    cout << "Output of 1st Function" << endl;
}
 
void func2() {
    cout << "Output of 2nd Function" << endl;
}

int main() {
    void (*funcPtr)();
    cout << "Calling 1st Function:" << endl;
    funcPtr = func1;
    funcPtr(); 
    cout << "Calling 2nd Function:" << endl;
    funcPtr = func2;
    funcPtr();    
    return 0;
}
