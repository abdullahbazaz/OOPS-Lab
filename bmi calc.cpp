#include <iostream>
using namespace std;

class BMI {
    double weight, height;

public:
    BMI(double w, double h) {
        weight = w;
        height = h;
    }

    void calculateBMI() {
        double bmi = weight / (height * height);
        cout << "BMI = " << bmi << endl;
    }
};

int main() {
    BMI b(70, 1.75);
    b.calculateBMI();
    return 0;
}
