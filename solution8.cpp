#include <iostream>
using namespace std;

class A {
public:
    int x;

    void show() {
        cout << x << " ";
    }
};

int main() {
    A a1, a2;
    a1.x = 10;
    a2.x = 20;

    a1.show();
    a2.show();

    return 0;
}

// 10 20
//