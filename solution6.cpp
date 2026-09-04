#include <iostream>
using namespace std;

class Number {
    int x;
public:
    Number(int a) { x = a; }
    Number(Number &n) { x = n.x + 5; }
    void show() { cout << x << endl; }
};
int main() {
    Number n1(10);
    Number n2 = n1;
    n1.show();
    n2.show();
}

//output 10\n15