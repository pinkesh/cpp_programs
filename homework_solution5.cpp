#include <iostream>
using namespace std;

void change(int x)
{
    x = x + 10;
}

int main()
{
    int n = 20;
    change(n);
    cout << n;
}

// output: 20
// doesn't change because it only changes x, not n