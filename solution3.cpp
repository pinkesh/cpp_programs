#include <iostream>
using namespace std;

class Test {
public:
    Test() { cout << "Constructor "; }
    ~Test() { cout << "Destructor "; }
};
int main() {
    Test t;
    cout << "Main ";
}

//output: Constructor Main Destructor