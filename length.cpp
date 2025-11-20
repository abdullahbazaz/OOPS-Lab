#include <iostream>
using namespace std;

class Distance {
private:
    int meters;
    int centimeters;

    // Function to normalize distance (convert 100 cm into 1 m)
    void normalize() {
        if (centimeters >= 100) {
            meters += centimeters / 100;
            centimeters = centimeters % 100;
        }
    }

public:
    // Constructor 1: meters only
    Distance(int m) {
        meters = m;
        centimeters = 0;
    }

    // Constructor 2: meters and centimeters
    Distance(int m, int cm) {
        meters = m;
        centimeters = cm;
        normalize();
    }

    // Function to add two Distance objects
    Distance add(Distance d) {
        Distance temp(0, 0);
        temp.meters = meters + d.meters;
        temp.centimeters = centimeters + d.centimeters;
        temp.normalize();
        return temp;
    }

    // Display function
    void display() {
        cout << meters << " meters " << centimeters << " centimeters" << endl;
    }
};

int main() {
    Distance d1(5, 75);   // 5m 75cm
    Distance d2(3, 50);   // 3m 50cm

    Distance d3 = d1.add(d2);

    cout << "Distance 1: ";
    d1.display();

    cout << "Distance 2: ";
    d2.display();

    cout << "Total Distance: ";
    d3.display();

    return 0;
}
