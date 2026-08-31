#include <iostream>
using namespace std;

class Test {
public:
    static int x;

    static void show() {
        cout << x;
    }
};

int main() {
    Test::x = 10;
    Test::show();
    return 0;
}