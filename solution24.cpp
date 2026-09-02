#include <iostream>
using namespace std;

class Box
{
    int length;

public:
    Box()
    {
        length = 10;
    }

    Box(int l)
    {
        length = l;
    }

    void show()
    {
        cout << length << " ";
    }
};

int main()
{
    Box a, b(25), c(3);
    a.show();
    b.show();
    c.show();
}