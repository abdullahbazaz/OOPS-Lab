
#include <iostream>
using namespace std;


int factorial(int n) {
    int result = 1;
    for (int i = 2; i <= n; ++i) {
        result *= i;
    }
    return result;
}

int main() {
    int number;

    cout << "Enter a number: ";
    cin >> number;

    if (number < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
    } else {
        int fact = factorial(number);
        cout << "Factorial of " << number << " is " << fact << endl;
    }

    return 0;
}
