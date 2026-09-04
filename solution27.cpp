#include <iostream>
using namespace std;

class Counter {
private:
    static int count;

public:
    static void increment() {
        count++;
    }

    static void show() {
        cout << count;
    }
};

int Counter::count = 0;

int main() {
    Counter::increment();
    Counter::increment();
    Counter::show();
    return 0;
}