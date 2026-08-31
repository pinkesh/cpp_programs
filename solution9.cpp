#include <iostream>
using namespace std;

class Item
{
    int code;
    float price;

public:
    Item(int c, float p)
    {
        code = c;
        price = p;
    }

    void show()
    {
        cout << code << " " << price << endl;
    }
};

int main()
{
    Item a(1, 2);
    Item b(101, 250.50);
    a.show();
    b.show();
}

// item object 'a' cannot be created because it doesn't give constructors. either give
// constructors or remove them