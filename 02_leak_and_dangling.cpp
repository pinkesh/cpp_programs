// 02_leak_and_dangling.cpp
// Demonstrates the two classic manual-memory bugs that simply cannot
// happen in C# because the CLR's garbage collector tracks reachability.
//
// Build with a leak detector to see this in action, e.g.:
//   g++ -fsanitize=address -g 02_leak_and_dangling.cpp -o leak_demo
//   ./leak_demo
// (On Windows/Visual Studio: use the built-in "Diagnostic Tools" -> Memory Usage,
//  or Debug > Windows > Memory while running in the debugger.)

#include <iostream>

struct Widget {
    int id;
    Widget(int i) : id(i) { std::cout << "Widget " << id << " created\n"; }
    ~Widget() { std::cout << "Widget " << id << " destroyed\n"; }
};

void leakyFunction() {
    Widget* w = new Widget(1);     // allocated...
    std::cout << "Using widget " << w->id << "\n";
    // ...never deleted. Every call to leakyFunction() loses this memory
    // permanently until the process exits. No crash, no warning - just a leak.
}

void danglingPointerDemo() {
    Widget* w = new Widget(2);
    Widget* aliasOfW = w;          // a second pointer to the SAME object

    delete w;                      // the object is destroyed and memory freed
    w = nullptr;                   // w is now safely null...

    // ...but aliasOfW still "points" at freed memory.
    // Using it now is undefined behavior - it might crash, might print
    // garbage, or might appear to "work" until it doesn't.
    //
    // Uncomment to see (often) garbage output or a crash:
    // std::cout << "Dangling access: " << aliasOfW->id << "\n";

    std::cout << "aliasOfW still holds the old address: " << aliasOfW << " (freed!)\n";
}

int main() {
    std::cout << "--- Leak demo ---\n";
    leakyFunction();

    std::cout << "\n--- Dangling pointer demo ---\n";
    danglingPointerDemo();

    std::cout << "\nNotice: only ONE 'destroyed' message printed above,\n"
                 "for Widget 2 - Widget 1 was leaked and never destroyed.\n";
    return 0;
}
