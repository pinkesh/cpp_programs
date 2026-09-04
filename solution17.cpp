#include <iostream>
using namespace std;

class Test {
    static int value;

public:
    static void show() {
        cout << value;
    }
};

int main() {
    Test::show();
    return 0;
}

// because a static method if it is called without an object reference, the
// value variable will be NA