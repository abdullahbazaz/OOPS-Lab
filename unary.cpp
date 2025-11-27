#include <iostream>
using namespace std;

class num {
public:
    int value;

    num(int v) : value(v) {}

    num& operator--() {
        value--;
        return *this;
    }
};

int main() {
    num n(5);

    --n;             
    cout << n.value; 
}
