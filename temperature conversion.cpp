#include <iostream>
using namespace std;

class Temperature {
    double celsius;

public:
    Temperature(double c) {
        celsius = c;
    }

    void convert() {
        double fahrenheit = (celsius * 9 / 5) + 32;
        cout << "Celsius: " << celsius << endl;
        cout << "Fahrenheit: " << fahrenheit << endl;
    }
};

int main() {
    Temperature t(25);
    t.convert();
    return 0;
}
