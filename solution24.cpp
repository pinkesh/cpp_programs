#include <iostream>
using namespace std;

class A {
private:
    int a = 1;

protected:
    int b = 2;

public:
    int c = 3;

    int getA(){
        return a;
    }
};

class B : public A {
public:
    void show() {
        cout << getA() << " ";
        cout << b << " ";
        cout << c;
    }
};

int main() {
    B obj;
    obj.show();
    return 0;
}

// B class can only access b and c, not a