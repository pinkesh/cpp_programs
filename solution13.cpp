#include <iostream>
using namespace std;

class Account {
    static int total;
    int balance;
public:
    Account(int b) {
        balance = b;
        total += balance;
    }
    static void showTotal() {
        cout << total;
    }
};
int Account::total = 0;

int main() {
    Account a(1000);
    Account b(2500);
    Account::showTotal();
}

//output 3500