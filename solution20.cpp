#include <iostream>
using namespace std;

class Test
{
public:
    void value(int x)
    {
        x = 100;
    }

    void pointer(int *x)
    {
        *x = 200;
    }
};

int main()
{
    Test t;
    int a = 10;

    t.value(a);
    cout << a << " ";

    t.pointer(&a);
    cout << a;
}

// The t.value(a) tries to turn a = 100 but since it is done locally
//, it doesn't actually change the value. However the t.pointer does change
// a because it directly accesses the address