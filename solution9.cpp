#include <iostream>
using namespace std;

class Account {
private:
    double balance;

public:
    void setBalance(double b) {
        balance = b;
    }

    double getBalance() {
        return balance;
    }
};

int main() {
    Account a;
    a.setBalance(5000);
    cout << a.getBalance();
    return 0;
}