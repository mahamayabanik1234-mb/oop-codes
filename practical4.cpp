#include <iostream>
using namespace std;

class Shape {
    double radius;
    double length;
    double width;
public:
    Shape(double r) {
        radius = r;
        length = 0;
        width = 0;
    }
    Shape(double l, double w) {
        radius = 0;
        length = l;
        width = w;
    }
    ~Shape() {
    }
    double perimeterCircle() {
        return 2 * 3.14159 * radius;
    }
    double perimeterRectangle() {
        return 2 * (length + width);
    }
};

int main() {
    double r, l, w;
    cout << "Enter radius of circle: ";
    cin >> r;
    Shape circle(r);
    cout << "Perimeter of circle: " << circle.perimeterCircle() << endl;
    cout << "Enter length and width of rectangle: ";
    cin >> l >> w;
    Shape rect(l, w);
    cout << "Perimeter of rectangle: " << rect.perimeterRectangle() << endl;
    return 0;
}
