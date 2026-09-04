#include <iostream>
using namespace std;

class Demo {
public:
    int x;
    static int y;

    void set() {
        x = 10;
        y = 20;
    }

    static void show() {
        cout << y << endl;
    }
};

int Demo::y = 0;

int main() {
    Demo d1, d2;
    d1.set();
    d2.set();

    cout << d1.x << " ";
    cout << d2.x << " ";
    Demo::show();

    return 0;
}