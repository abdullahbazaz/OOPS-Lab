#include <iostream>
using namespace std;

void swapReference(int &x, int &y) {
    int temp = x;
    x = y;
    y = temp;
}

int main() {
    int a, b;

    cout << "Enter two integers: ";
    cin >> a >> b;

    cout << "\nBefore swapping:" << endl;
    cout << "a = " << a << ", b = " << b << endl;

    swapReference(a, b);

    cout << "\nAfter swapping:" << endl;
    cout << "a = " << a << ", b = " << b << endl;

    return 0;
}
