#include <iostream>
using namespace std;

class Account
{
public:
    int balance;

public:
    Account(int b)
    {
        balance = b;
    }

    void deposit(int amount)
    {
        balance = balance + amount;
    }

    void show()
    {
        cout << balance << endl;
    }
};

int main()
{
    Account a(1000);
    Account b(500);

    a.deposit(200);
    b.deposit(a.balance);

    a.show();
    b.show();
}

// doesn't compile, change the constructor to public instead of private