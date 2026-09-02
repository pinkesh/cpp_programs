#include <iostream>
using namespace std;

class Number
{
public:
    void change(int x)
    {
        x = x * 2;
    }
};

int main()
{
    Number n;
    int a = 15;
    n.change(a);
    cout << a;
}