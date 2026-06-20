#include <iostream>
using namespace std;

class Circle {
private:
    float radius;

public:
    Circle() {
        radius = 1;
    }

    Circle(float r) {
        radius = r;
    }

    Circle(const Circle &c) {
        radius = c.radius;
    }

    void Area() {
        cout << "Area : " << 3.14 * radius * radius << endl;
    }
};

int main() {
    Circle c1;
    Circle c2(5);
    Circle c3(c2);

    c1.Area();
    c2.Area();
    c3.Area();

    return 0;
}
