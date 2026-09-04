#include <iostream>
using namespace std;

class Parent {
public:
    static void show() {
        cout << "Parent";
    }
};

class Child : public Parent {
public:
    static void show() {
        cout << "Child";
    }
};

int main() {
    Parent* p = new Child();
    p->show();
    delete p;
    return 0;
}

//output: Parent
// if it was virtual, Child would be outputted instead