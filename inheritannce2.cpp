#include <iostream>
#include <string>
using namespace std;

class student {
protected:
    string name;
    int rollnumber;

public:
    student(string n, int roll) : name(n), rollnumber(roll) {}

    void displaystudentDetails() {
        cout << "student name: " << name;
        cout << "roll no.: " << rollnumber;
    }
};

class marks : public student {
private:
    double subject1, subject2, subject3;
    double total;
    double percentage;

public:
    marks(string n, int roll, double sub1, double sub2, double sub3)
        : student(n, roll), subject1(sub1), subject2(sub2), subject3(sub3) {
        calculateTotalAndPercentage();
    }

    void calculateTotalAndPercentage() {
        total = subject1 + subject2 + subject3;
        percentage = (total / 300) * 100;
    }

    void displayAcademicReport() {
        displaystudentDetails(); 
        cout << "marks in subject 1: " << subject1 << endl;
        cout << "marks in subject 2: " << subject2 << endl;
        cout << "marks in subject 3: " << subject3 << endl;
        cout << "Total: " << total << endl;
        cout << "percentage: " << percentage << "%" << endl;
    }
};

int main() {
    marks student1("yamin", 101, 85, 90, 88);

    student1.displayAcademicReport();

    return 0;
}
