#include <iostream>
using namespace std;

bool divide(int a, int b, int& result)
{
    if (b == 0)
        return false;

    result = a / b;
    return true;
}

int main()
{
    int result;

    if (divide(10, 0, result))
    {
        cout << "Result = " << result << endl;
    }
    else
    {
        cout << "Division failed" << endl;
    }

    return 0;
}