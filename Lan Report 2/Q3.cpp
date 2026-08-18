#include <iostream>
using namespace std;

template <typename T>
T calculateBill(T unitCost, int quantity, T discount) {
    T total = unitCost * quantity;
    T discountAmount = total * discount / 100;

    return total - discountAmount;
}

template <typename T>
T compareBill(T bill1, T bill2) {
    if (bill1 > bill2)
        return bill1;
    else
        return bill2;
}

int main() {
    int medicineBill = calculateBill(100, 5, 10);

    double serviceBill = calculateBill(1250.50, 2, 15.0);

    cout << "Medicine Bill: " << medicineBill << endl;
    cout << "Medical Service Bill: " << serviceBill << endl;

    cout << "Larger Integer Bill: "
         << compareBill(500, 700) << endl;

    cout << "Larger Double Bill: "
         << compareBill(1250.50, 980.75) << endl;

    return 0;
}