#include <iostream>
using namespace std;

class Base {
protected:
    int x;

public:
    Base() : x(10) {}
};

class Derived : public Base {
public:
    Derived() {
        x += 5;
    }

    void show() {
        cout << x;
    }
};

int main() {
    Derived d;
    d.show();
    return 0;
}