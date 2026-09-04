#include <iostream>
using namespace std;

class Parent {
public:
    static int value;
};

int Parent::value = 10;

class Child : public Parent {
};

int main() {
    Child::value = 50;
    cout << Parent::value;
    return 0;
}

// output: 50
// can access because set to public