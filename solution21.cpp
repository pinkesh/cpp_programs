#include <iostream>
using namespace std;

class Base
{
protected:
    int *a;

protected:
    int *b;

public:
    int *c;

public:
    void set()
    {
        *a = 10;
        *b = 20;
        *c = 30;
        //cout << "Variables set";
    }
};

class Derived : public Base
{
public:
    void show()
    {
        cout << *a << " ";
        cout << *b << " ";
        cout << *c;
    }
};

int main(){
    //cout << "hello";
    Derived b;
    b.set();
    b.show();
}
