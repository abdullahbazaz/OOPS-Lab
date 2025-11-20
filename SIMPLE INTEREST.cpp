#include <iostream>
using namespace std;


class SimpleInterest {
private:
    float principal;
    float rate;
    float time;

public:
 
    void inputData() {
        cout << "Enter principal amount: ";
        cin >> principal;
        cout << "Enter rate of interest: ";
        cin >> rate;
        cout << "Enter time (in years): ";
        cin >> time;
    }

    
    float calculateInterest() {
        return (principal * rate * time) / 100;
    }

  lt
    void display() {
        float interest = calculateInterest();
        cout << "Simple Interest = " << interest << endl;
    }
};

int main() {
    SimpleInterest si;  
    si.inputData();     
    si.display();       
    return 0;
}
