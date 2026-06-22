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

    void difference(truck ob);
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

    friend void car::difference(truck ob);
};

void car::difference(truck ob) {
    cout << passenger - ob.passenger << endl;
}

int main() {
    car c(50, 120);
    truck t(30, 80);

    c.difference(t);

    return 0;
}
