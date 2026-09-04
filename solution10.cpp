#include <iostream>
using namespace std;

class Base {
public:
    void show() {
        cout << "Base ";
    }
};

class Derived : public Base {
public:
    void show() {
        cout << "Derived ";
    }

    void test() {
        Base::show();
        show();
    }
};

int main() {
    Derived d;
    d.test();
    return 0;
}

// output: Base Derived
//  Base::show() runs the show() function from the parent class, which prints Base, not Derived