#include <iostream>
using namespace std;

class Bank {
private:
    static double rate;

public:
    static void setRate(double r) {
        rate = r;
    }

    void showRate() {
        cout << rate;
    }
};
double Bank::rate = 0.0;

int main() {
    Bank::setRate(7.5);
    Bank b;
    b.showRate();
    return 0;
}