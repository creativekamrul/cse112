#include <iostream>
using namespace std;

class BOX {
private:
    int length, breadth, height;

public:
    BOX(int l, int b, int h) {
        length = l;
        breadth = b;
        height = h;
    }

    friend int volume(BOX b);
};

int volume(BOX b) {
    return b.length * b.breadth * b.height;
}

int main() {
    int l, b, h;

    cin >> l >> b >> h;

    BOX box(l, b, h);

    cout << volume(box);

    return 0;
}
