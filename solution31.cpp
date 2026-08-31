#include <iostream>
using namespace std;

class Product
{
    int code;
    float price;

public:
    Product(int c, float p)
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
    Product p[2] = {
        Product(101, 20.5),
        Product(102, 30.5)
    };

    for(int i = 0; i < 2; i++)
        p[i].show();
}