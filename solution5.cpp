#include <iostream>
using namespace std;

class Demo {
    int x;
public:
    Demo(int a) { x = a; }
    void show() { cout << x; }
};
int main() {
    Demo d(10);
    d.show();
    Demo* e = &d;
}