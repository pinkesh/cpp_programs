#include <iostream>
using namespace std;

class A {
public:
    virtual void show() {
        cout << "A";
    }
};

class B : public A {
public:
    void show() override {
        cout << "B";
    }
};

int main() {
    A* p = new B();
    p->show();
    delete p;
    return 0;
}

// output: B
// because of the virtual keyword in base class