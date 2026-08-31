#include <iostream>
using namespace std;

class Counter
{
public:
    int count;

public:
    Counter()
    {
        count = 0;
    }

    void add(int n)
    {
        count = count + n;
    }

    void show()
    {
        cout << count << " ";
    }
};

int main()
{
    Counter a, b;
    a.add(5);
    b.add(10);
    a.add(3);
    b.add(a.count);

    a.show();
    b.show();
}