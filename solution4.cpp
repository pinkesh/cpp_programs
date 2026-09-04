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

// count is set to 5, then a and b each add one so count = 7