#include <iostream>
using namespace std;

class Book {
    int price;
public:
    Book(int p) { price = p; }
};
int main() {
    Book b(30);
    return 0;
}