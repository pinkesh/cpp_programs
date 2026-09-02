#include <iostream>
using namespace std;

class Number
{
public:
    int x;

    Number()
    {
        x = 10;
    }

    void change()
    {
        x = x + 5;
    }
};

int main()
{
    Number n1;
    Number n2;

    n1.change();
    cout << n1.x << " " << n2.x;
}

// output: 15 10
// n1 goes through the .change()