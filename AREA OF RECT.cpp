#include <iostream>
using namespace std;

class Rectangle {
    float length, breadth; 

public:
    void input() { 
        cout << "Enter length: ";
        cin >> length;
        cout << "Enter breadth: ";
        cin >> breadth;
    }

    void calculate() { 
        float area = length * breadth;
        float perimeter = 2 * (length + breadth);

        cout << "Area = " << area << endl;
        cout << "Perimeter = " << perimeter << endl;
    }
};

int main() {
    Rectangle r;  
    r.input();    
    r.calculate();
    return 0;
}
