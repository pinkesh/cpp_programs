#include <iostream>
using namespace std;

class Shape {
public:
    virtual void area() = 0;

    void message() {
        cout << "Shape ";
    }
};

class Circle : public Shape {
public:
    void area() override {
        cout << "Circle ";
    }
};

int main() {
    Circle c;
    c.message();
    c.area();
    return 0;
}

//output: Shape Circle