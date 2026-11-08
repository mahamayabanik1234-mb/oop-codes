#include <iostream>
using namespace std;

class Swapper {
    int value;
public:
    Swapper(int val) {
        value = val;
    }
    friend void swapValues(Swapper &obj1, Swapper &obj2);
    void display() {
        cout << value << endl;
    }
};

void swapValues(Swapper &obj1, Swapper &obj2) {
    int temp = obj1.value;
    obj1.value = obj2.value;
    obj2.value = temp;
}

int main() {
    int v1, v2;
    cout << "Enter value for Object 1: ";
    cin >> v1;
    cout << "Enter value for Object 2: ";
    cin >> v2;
    Swapper s1(v1), s2(v2);
    swapValues(s1, s2);
    cout << "After Swapping:" << endl;
    cout << "Object 1: "; s1.display();
    cout << "Object 2: "; s2.display();
    return 0;
}
