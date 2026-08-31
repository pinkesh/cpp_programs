#include <iostream>
using namespace std;

class Counter {
public:
    static int count;
};

int Counter::count = 5;

int main() {
    Counter a, b;
    a.count++;
    b.count++;
    cout << Counter::count;
    return 0;
}

// 