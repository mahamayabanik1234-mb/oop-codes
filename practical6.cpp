#include <iostream>
using namespace std;

class Complex {
    double real;
    double imag;
public:
    Complex() {
        real = 0;
        imag = 0;
    }
    Complex(double r, double i) {
        real = r;
        imag = i;
    }
    Complex operator++() {
        ++real;
        ++imag;
        return *this;
    }
    Complex operator--() {
        --real;
        --imag;
        return *this;
    }
    Complex operator+(const Complex& obj) {
        return Complex(real + obj.real, imag + obj.imag);
    }
    Complex operator-(const Complex& obj) {
        return Complex(real - obj.real, imag - obj.imag);
    }
    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex c1(4, 5), c2(2, 3);
    cout << "c1: "; c1.display();
    cout << "c2: "; c2.display();
    Complex c3 = c1 + c2;
    cout << "c1 + c2: "; c3.display();
    Complex c4 = c1 - c2;
    cout << "c1 - c2: "; c4.display();
    ++c1;
    cout << "++c1: "; c1.display();
    --c2;
    cout << "--c2: "; c2.display();
    return 0;
}
