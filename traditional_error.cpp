#include <iostream>
using namespace std;

int divide(int a, int b)
{
    if (b == 0)
        return 0;   // Error indication

    return a / b;
}

int main()
{
    int result = divide(10, 0);

    cout << "Result = " << result << endl;

    return 0;
}