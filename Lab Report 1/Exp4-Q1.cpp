#include <iostream>
using namespace std;

class Multiply {
public:
    int multiplication(int a, int b) {
        return a * b;
    }

    int multiplication(int a, int b, int c) {
        return a * b * c;
    }
};

int main() {
    Multiply m;

    cout << m.multiplication(40, 55) << endl;
    cout << m.multiplication(24, 30, 40) << endl;

    return 0;
}
