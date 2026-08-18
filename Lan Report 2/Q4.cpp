#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string accountNumber;

protected:
    double balance;

public:
    string accountHolder;

    BankAccount(string number, double bal, string holder) {
        accountNumber = number;
        balance = bal;
        accountHolder = holder;
    }

    string getAccountNumber() {
        return accountNumber;
    }
};

class SavingsAccount : private BankAccount {
public:
    double interestRate;

    SavingsAccount(string number, double bal, string holder, double rate)
        : BankAccount(number, bal, holder) {
        interestRate = rate;
    }

    void display() {
        cout << "Account Number: " << getAccountNumber() << endl;
        cout << "Account Holder: " << accountHolder << endl;
        cout << "Balance: " << balance << endl;
        cout << "Interest Rate: " << interestRate << "%" << endl;
    }
};

class CurrentAccount : protected BankAccount {
public:
    double overdraftLimit;

    CurrentAccount(string number, double bal, string holder, double limit)
        : BankAccount(number, bal, holder) {
        overdraftLimit = limit;
    }

    void display() {
        cout << "Account Number: " << getAccountNumber() << endl;
        cout << "Account Holder: " << accountHolder << endl;
        cout << "Balance: " << balance << endl;
        cout << "Overdraft Limit: " << overdraftLimit << endl;
    }
};

class StudentAccount : public BankAccount {
public:
    string studentId;

    StudentAccount(string number, double bal, string holder, string id)
        : BankAccount(number, bal, holder) {
        studentId = id;
    }

    void display() {
        cout << "Account Number: " << getAccountNumber() << endl;
        cout << "Account Holder: " << accountHolder << endl;
        cout << "Balance: " << balance << endl;
        cout << "Student ID: " << studentId << endl;
    }
};

int main() {
    SavingsAccount savings(
        "SA1001",
        50000,
        "Rahim",
        5.5
    );

    CurrentAccount current(
        "CA2001",
        75000,
        "Karim",
        20000
    );

    StudentAccount student(
        "ST3001",
        15000,
        "Nadia",
        "CSE112"
    );

    cout << "Savings Account:" << endl;
    savings.display();

    cout << "\nCurrent Account:" << endl;
    current.display();

    cout << "\nStudent Account:" << endl;
    student.display();

    return 0;
}