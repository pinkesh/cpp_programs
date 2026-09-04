#include <iostream>
using namespace std;

class A {
public:
    int x = 10;
};

class B : virtual public A {};
class C : virtual public A {};

class D : public B, public C {
public:
    void show() {
        cout << x;
    }
};

int main() {
    D d;
    d.show();
    return 0;
}