#include <iostream>
using namespace std;

class Marks
{
    int m[4];

public:
    void set()
    {
        m[0] = 10;
        m[1] = 20;
        m[2] = 30;
        m[3] = 40;
    }

    int sum()
    {
        int s = 0;
        for(int i = 0; i < 4; i++)
            s += m[i];
        return s;
    }
};

int main()
{
    Marks a, b;
    a.set();
    b.set();
    cout << a.sum() << endl;
    cout << b.sum() << endl;
}