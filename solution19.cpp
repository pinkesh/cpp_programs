#include <iostream>
using namespace std;

class Parent {
protected:
    int x = 10;
};

class Child : public Parent {
public:
    void show() {
        cout << x;
    }
};

int main() {
    Child c;
    c.show();
    return 0;
}

//output:10
// main cannot access c.x bc Parent class is protected