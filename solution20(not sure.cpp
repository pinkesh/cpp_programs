#include <iostream>
using namespace std;

class Parent {
private:
    int value;

public:
    Parent(int v) : value(v) {}
};

class Child : public Parent {
public:
    Child(int v) {
        // Fix this constructor
    }
};

int main() {
    Child c(25);
    return 0;
}

