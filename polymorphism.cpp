#include <iostream>
using namespace std;

// Base class
class PaymentMethod {
public:
    virtual void pay() {
        cout << "Default payment method" << endl;
    }

    virtual ~PaymentMethod() {}
};

// Derived class 1
class MobileMoney : public PaymentMethod {
public:
    void pay() override {
        cout << "Paying using Mobile Money..." << endl;
    }
};

// Derived class 2
class CardPayment : public PaymentMethod {
public:
    void pay() override {
        cout << "Paying using Card..." << endl;
    }
};

// Derived class 3
class CashPayment : public PaymentMethod {
public:
    void pay() override {
        cout << "Paying using Cash..." << endl;
    }
};

int main() {
    PaymentMethod* p;

    MobileMoney mobile;
    CardPayment card;
    CashPayment cash;

    // Calling pay() through a base-class pointer
    p = &mobile;
    p->pay();

    p = &card;
    p->pay();

    p = &cash;
    p->pay();

    return 0;
}