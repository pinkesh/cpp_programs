#include <iostream>
using namespace std;

class Car {
public:
    void start() {
        cout << "Car started";
    }
};

int main() {
    Car a;
    a.start();
    return 0;
}

// not created and called correctly