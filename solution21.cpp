#include <iostream>
using namespace std;

class Base {
public:
    virtual void show() {
        cout << "Base";
    }
};

class Derived : public Base {
public:
    void show() override {
        cout << "Derived";
    }
};

void display(Base& b) {
    b.show();
}

int main() {
    Derived d;
    display(d);
    return 0;
}

//output: Derived
// virutal makes sure that display function runs the child version and not parent