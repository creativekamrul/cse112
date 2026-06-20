#include <iostream>
using namespace std;

class COMPLEX {
private:
    int real, imag;

public:
    COMPLEX(int r = 0, int i = 0) {
        real = r;
        imag = i;
    }

    COMPLEX add(COMPLEX c) {
        COMPLEX temp;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp;
    }

    void show() {
        cout << real << " +" << imag << "i" << endl;
    }
};

int main() {
    int r1, i1, r2, i2;

    cin >> r1 >> i1;
    cin >> r2 >> i2;

    COMPLEX C1(r1, i1);
    COMPLEX C2(r2, i2);

    COMPLEX C3 = C1.add(C2);

    C1.show();
    C2.show();
    C3.show();

    return 0;
}
