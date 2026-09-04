#include <iostream>
using namespace std;

class A {
public:
    static int x;

    static void show() {
        cout << x << " ";
    }
};

int A::x = 1;

class B : public A {
};

int main() {
    A::x = 5;
    B::show();
    B::x = 10;
    A::show();
    //B::show();
    return 0;
}

//output: 5 10
// same variables because of static keyword