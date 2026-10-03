#include <iostream>
using namespace std;

int main()
{
    try
    {
        cout << "Outer try" << endl;

        try
        {
            cout << "Inner try" << endl;

            throw 100;
        }
        catch (double x)
        {
            cout << "Inner double catch" << endl;
        }
        cout <<"continue" << endl;
    }
    
    catch (int x)
    {
        cout << "Outer int catch: " << x << endl;
    }

    return 0;
}