// 07_call_by_pointer.cpp
// Demonstrates call-by-reference via pointer: the function receives an address
// and writes back through it, mutating the caller's variable.

#include <iostream>
using namespace std;

void doubleIt(int *p) {
    if (p == nullptr) {        
        cout << "  null pointer received, doing nothing\n";
        return;
    }
    cout << "  inside doubleIt: *p = " << *p << " (before)\n";
    *p *= 2;
    cout << "  inside doubleIt: *p = " << *p << " (after)\n";
}

// Useful pattern: swap two values through pointers
void swap(int* a, int* b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int main() {
    int x = 10;
    cout << "Before doubleIt: x = " << x << "\n";
    doubleIt(&x);                                   // pass address
    cout << "After  doubleIt: x = " << x << "\n\n";  // 20

    // Null pointer guard demo
    int* bad = nullptr;
    doubleIt(bad);

    // Swap demo
    int a = 3, b = 7;
    cout << "\nBefore swap: a=" << a << " b=" << b << "\n";
    swap(&a, &b);
    cout << "After  swap: a=" << a << " b=" << b << "\n";

    return 0;
}
