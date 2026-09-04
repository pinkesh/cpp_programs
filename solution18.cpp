#include <iostream>
using namespace std;

class Product {
public:
    static int total;
};

int Product::total = 100;

int main() {
    
    cout << Product::total;
    return 0;
}