#include <iostream>
using namespace std;

class Box {
    int length;
public:
    Box(int l) : length(l) {}
    Box(const Box &b) : length(b.length * 2) {}
    void show() { cout << length << " "; }
};
int main() {
    Box b1(5);
    Box b2(b1);
    Box b3 = b2;
    b1.show();
    b2.show();
    b3.show();
}

//5 10 20