#include <iostream>
#include <string>
using namespace std;

class Product {
public:
    string productName;
    double price;
    int quantity;

    Product(string name, double p, int q) {
        productName = name;
        price = p;
        quantity = q;
    }

    double operator+(Product p) {
        return (price * quantity) + (p.price * p.quantity);
    }

    bool operator>(Product p) {
        return price > p.price;
    }

    bool operator==(Product p) {
        return price == p.price;
    }
};

int main() {
    Product p1("Laptop", 80000, 1);
    Product p2("Monitor", 25000, 2);
    Product p3("Keyboard", 25000, 1);

    cout << "Total Price of Product 1 and Product 2: "
         << p1 + p2 << endl;

    if (p1 > p2)
        cout << "Product 1 is more expensive than Product 2." << endl;
    else
        cout << "Product 2 is more expensive than Product 1." << endl;

    if (p2 == p3)
        cout << "Product 2 and Product 3 have the same price." << endl;
    else
        cout << "Product 2 and Product 3 have different prices." << endl;

    return 0;
}