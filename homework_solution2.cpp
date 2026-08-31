#include <iostream>
using namespace std;

class Box
{
public:
    int length;
public:
    void setLength(int l)
    {
        length = l;
    }
};

int main()
{
    Box b;
    b.length = 20;
}