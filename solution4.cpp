#include <iostream>
using namespace std;

class Counter {
    static int count;
public:
    Counter() { count++; }
    static void show() { cout << count; }
};
int Counter::count = 0;

int main() {
    Counter a, b;
    Counter::show();
}

//output: 2