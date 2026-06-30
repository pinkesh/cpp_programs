#include <iostream>
using namespace std;

int main()
{
    int x = 10;

    if (x > 5)
    {
        if (x < 15)
            cout << "A";
        else
            cout << "B";
    }
    else
    {
        cout << "C";
    }

    cout << "D";

    return 0;
}