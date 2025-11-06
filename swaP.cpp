#include <iostream>
using namespace std;

void swapValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    cout << "Inside swapValue function: a = " << a << ", b = " << b << endl;
}

int main() {
    int x, y;

    cout << "Enter two numbers: ";
    cin >> x >> y;

    cout << "Before swapping in main: x = " << x << ", y = " << y << endl;

    swapValue(x, y);

    cout << "After swapping in main: x = " << x << ", y = " << y << endl;

    return 0;
}
