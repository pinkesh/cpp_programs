#include <iostream>
using namespace std;

class Payment
{
public:
    virtual void makePayment() = 0;
};

class CreditCard : public Payment
{
public:
    void makePayment()
    {
        cout << "Payment made using Credit Card" << endl;
    }
};

class UPI : public Payment
{
public:
    void makePayment()
    {
        cout << "Payment made using UPI" << endl;
    }
};

int main()
{
    CreditCard card;
    UPI upi;

    card.makePayment();
    upi.makePayment();

    return 0;
}