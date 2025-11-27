#include <iostream>
using namespace std;

class num {
public:
    int value;

    num(int v) : value(v) {}


    bool operator==(const num& other) const {
        return value == other.value;
    }


    bool operator<(const num& other) const {
        return value < other.value;
    }
};

int main() {
    num a(3), b(5), c(3);

    cout << (a == c);
    cout << (a < b);
}
