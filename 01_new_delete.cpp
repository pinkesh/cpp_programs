// 01_new_delete.cpp
// Demonstrates manual heap allocation: new, delete, and the array forms.
// Compare to C#: "new MyClass()" in C# is GC-managed; "new" in C++ is NOT.

#include <iostream>
using namespace std;

int main() {
    // --- Single value on the heap ---
    int* p = new int(42);          // allocate one int, initialize to 42
    cout << "Value via pointer: " << *p << "\n";
    cout << "Address on heap:   " << p << "\n";

    delete p;                      // we MUST free it ourselves
    p = nullptr;                   // good practice: avoid a dangling pointer

    // --- Array on the heap ---
    int size = 10;
    int* arr = new int[size];      // size decided at runtime
    for (int i = 0; i < size; ++i) {
        arr[i] = i * i;
    }

    cout << "\nArray contents: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << "\n";

    delete[] arr;                  // IMPORTANT: array form needs delete[]
    arr = nullptr;

    // --- Common mistake (commented out on purpose) ---
    // int* bad = new int[5];
    // delete bad;                 // WRONG: mismatched delete/delete[] -> undefined behavior

    cout << "\nDone. Memory was freed manually - no garbage collector involved.\n";
    return 0;
}
