#include <iostream>
#include <string>
using namespace std;

class People {
private:
    string name;
    int age;

public:
    People() {
        name = "";
        age = 0;
    }

    void setData(string n, int a) {
        name = n;
        age = a;
    }

    void display() {
        cout << "Name: " << name << " And Age:" << age << endl;
    }
};

int main() {
    People p[5];

    string name;
    int age;

    for (int i = 0; i < 5; i++) {
        cin >> name;
        cin >> age;

        p[i].setData(name, age);
    }

    for (int i = 0; i < 5; i++) {
        p[i].display();
    }

    return 0;
}
