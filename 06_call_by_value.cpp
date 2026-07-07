// 06_call_by_value.cpp
// Demonstrates call-by-value: the function gets its own copy.
// No matter what happens inside, the caller's variable is safe.

#include <iostream>
using namespace std;

void doubleIt(int n) {        // n is a COPY; changes here stay local
    cout << "  inside doubleIt: n = " << n << " (before)\n";
    n *= 2;
    cout << "  inside doubleIt: n = " << n << " (after)\n";
}

void fill(int buf[], int size, int val) {
    // Arrays decay to pointers even in "by value" style — this DOES modify caller's data.
    
    for (int i = 0; i < size; i++) buf[i] = val;
}

int main() {
    int x = 10;
    cout << "Before doubleIt: x = " << x << "\n";
    doubleIt(x);
    cout << "After  doubleIt: x = " << x << "\n\n";   // still 10

    // C-arrays are passed as pointers even without * ---
    int arr[] = {1, 2, 3};
    fill(arr, 3, 99);
    cout << "After fill(): arr = " << arr[0] << " " << arr[1] << " " << arr[2] << "\n";
    // All 99 — even though fill() looks like it takes by value, the array decayed to a pointer.

    return 0;
}
