#include <iostream>
using namespace std;

class Bank {
public:
    virtual double getBalance() {
        return 0;
    }
};

class BankA : public Bank {
public:
    double getBalance() {
        return 10000;
    }
};

class BankB : public Bank {
public:
    double getBalance() {
        return 15000;
    }
};

class BankC : public Bank {
public:
    double getBalance() {
        return 20000;
    }
};

int main() {
    BankA bankA;
    BankB bankB;
    BankC bankC;

    cout << "Balance in Bank A: " << bankA.getBalance() << endl;
    cout << "Balance in Bank B: " << bankB.getBalance() << endl;
    cout << "Balance in Bank C: " << bankC.getBalance() << endl;

    return 0;
}