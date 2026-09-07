#include <iostream>
using namespace std;

class A {
public:
    A() { cout << "A+"; }
    ~A() { cout << "A-"; }
};
void test() {
    A x;
    A y;
}
int main() {
    test();
    cout << "M";
}

//A+A+A-A-M
// x then y is constructed