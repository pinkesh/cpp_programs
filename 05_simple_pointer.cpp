// 05_simple_pointer.cpp
// Covers: declaring a pointer, address-of (&), dereference (*), writing through a pointer.
// Run under a debugger and watch the "Watch" window to see &x and p hold the same address.

#include <iostream>
using namespace std;

int main() {
    int x = 42;
    int *p = &x;           // p stores the ADDRESS of x

    cout << "=== Reading ===\n";
    cout << "x    = " << x   << "\n";   // 42       – value directly
    cout << "&x   = " << &x  << "\n";   // address of x (e.g. 0x00A0)
    cout << "p    = " << p   << "\n";   // same address – p holds it
    cout << "*p   = " << *p  << "\n";   // 42       – dereference



    
    //cout << "&p   = " << &p  << "\n";   // address of p

    cout << "\n=== Writing through the pointer ===\n";
    *p = 99;               // modify x through p
    cout << "*p after *p=99: " << *p << "\n";
    cout << "x  after *p=99: " << x  << "\n";   // also 99 – same cell!

    cout << "\n=== Pointer reassignment ===\n";
    int y = 7;
    p = &y;                // p now points to y, not x
    cout << "*p (now &y): " << *p << "\n";   // 7
    *p = 123;              // modify y through p
    cout << "*p after *p=123: " << *p << "\n";
    cout << "y  after *p=123: " << y  << "\n";   // also 123 – same cell!
    cout << "x is still:  " << x  << "\n";   // 99 – unaffected

    return 0;
}
