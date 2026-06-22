#include <iostream>
using namespace std;

class truck;

class car {
private:
    int passenger;
    int speed;

public:
    car(int p, int s) {
        passenger = p;
        speed = s;
    }

    friend void difference(car, truck);
};

class truck {
private:
    int passenger;
    int speed;

public:
    truck(int p, int s) {
        passenger = p;
        speed = s;
    }

    friend void difference(car, truck);
};

void difference(car ob1, truck ob2) {
    cout << ob1.passenger - ob2.passenger << endl;
}

int main() {
    car c(45, 100);
    truck t(25, 70);

    difference(c, t);

    return 0;
}
