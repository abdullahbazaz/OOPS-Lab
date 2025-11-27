#include <iostream>
using namespace std;

class Point {
public:
    int x, y;

    Point(int x, int y) : x(x), y(y) {}

   
    Point operator+(const Point& other) const {
        return Point(x + other.x, y + other.y);
    }
};

int main() {
    Point a(1, 2);
    Point b(3, 4);

    Point c = a + b;
    cout << c.x << " " << c.y }
