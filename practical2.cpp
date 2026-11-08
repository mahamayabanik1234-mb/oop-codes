#include <iostream>
using namespace std;

void callByValue(int a) {
    a = a + 10;
    cout << "Inside callByValue, value is: " << a << endl;
}

void callByReference(int &a) {
    a = a + 10;
    cout << "Inside callByReference, value is: " << a << endl;
}

int main() {
    int x = 5;
    cout << "Original value: " << x << endl;
    callByValue(x);
    cout << "After callByValue: " << x << endl;
    callByReference(x);
    cout << "After callByReference: " << x << endl;
    return 0;
}
