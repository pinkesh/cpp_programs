#include <iostream>
using namespace std;

class Base {
private:
    int x;

public:
    void setX(int n) {
        x = n;
    }
};

class Derived : public Base {
public:
    void change() {
        setX(50);
    }
};

int main() {
    Derived d;
    d.change();
    return 0;
}