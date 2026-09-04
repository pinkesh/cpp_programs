#include <iostream>
using namespace std;

class Test {
public:
    static int x;

    static void show() {
        cout << x;
    }
};

// Needs to be defined outside the class globally
int Test::x = 10;

int main() {
    //Test::x = 1;
    Test::show();
    return 0;
}