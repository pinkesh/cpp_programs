#include <iostream>
using namespace std;

int main()
{
    try
    {
        throw 10;
    }
    
    catch (int x)
    {
        cout << "Integer" << endl;
    }
    catch (...)
    {
        cout << "Catch all" << endl;
    }

    return 0;
}