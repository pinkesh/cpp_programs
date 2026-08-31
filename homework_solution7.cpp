#include <iostream>
using namespace std;

class Test
{
public:
    int x;
};

int main()
{
    Test t;
    t.x = 50;
    cout << t.x;
}

// needs to be public