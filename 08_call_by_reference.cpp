// 08_call_by_reference.cpp
// Demonstrates call-by-reference via C++ references (&).
// The function receives an alias for the caller's variable — no pointer syntax.

#include <iostream>
using namespace std;

void doubleIt(int& r) {       // r IS the caller's variable — an alias, not a copy
    cout << "  inside doubleIt: r = " << r << " (before)\n";
    r *= 2;                   // modifying r modifies the caller's variable directly
    cout << "  inside doubleIt: r = " << r << " (after)\n";
}

// const reference: lets us READ a large object cheaply without copying,
// AND guarantees we won't modify it.
void printInfo(const string& name) {
    cout << "  Name: " << name << " (length=" << name.size() << ")\n";
    // name = "hacked";  // ← would NOT compile; const protects it
}

// References cannot be null — compile-time safety
void swap(int& a, int& b) {
    int tmp = a;
    a = b;
    b = tmp;
}

int main() {
    int x = 10;
    cout << "Before doubleIt: x = " << x << "\n";
    doubleIt(x);                                       // looks like by-value at the call site!
    cout << "After  doubleIt: x = " << x << "\n\n";  // 20 — it WAS changed

    string fullName = "Bjarne Stroustrup";
    printInfo(fullName);                               // no copy of the string made

    int a = 3, b = 7;
    cout << "\nBefore swap: a=" << a << " b=" << b << "\n";
    swap(a, b);
    cout << "After  swap: a=" << a << " b=" << b << "\n";

    return 0;
}
