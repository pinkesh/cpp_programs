#include <iostream>
using namespace std;

void change(int *x)
{
    *x = *x + 10;
}

int main()
{
    int n = 20;
    change(&n);
    cout << n;
}

//output: 30