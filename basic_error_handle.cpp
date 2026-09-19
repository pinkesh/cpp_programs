#include <iostream>
#include <stdexcept>
using namespace std;

int main()
{
    try
    {
        int a = 10;
        int b = 0;

        if (b == 0)
        {
            throw range_error("Cannot divide by zero");
        }

        int result = a / b;

        cout << "Result = " << result << endl;
    }
    catch (const exception& e)
    {
        cout << "Error: " << e.what() << endl;
    }

    cout << "Program continues..." << endl;

    return 0;
}