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
    void show() {
        cout << "B";
    }
};

int main() {
    A* p = new B();
    p->show();
    return 0;
}