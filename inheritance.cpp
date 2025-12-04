#include <iostream>
using namespace std;

class Shape {
protected:
    double length;
    double width;

public:
    Shape(double l, double w) : length(l), width(w) {}
};

class Rectangle : public Shape {
public:
    Rectangle(double l, double w) : Shape(l, w) {}

    double getPerimeter() {
        return 2 * (length + width);
    }

    double getArea() {
        return length * width;
    }
};

int main() {
    Rectangle rect(5.0, 3.0);

    cout << "perimeter of rectangle: " << rect.getPerimeter() << endl;
    cout << "area: " << rect.getArea() << endl;

    return 0;
}
