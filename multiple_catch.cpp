#include <iostream>
using namespace std;

int main()
{
    try
    {
        throw 10;
    }
    catch (double x)
    {
        cout << "Double exception" << endl;
    }
    catch (int x)
    {
        cout << "Integer exception: " << x << endl;
    }
    catch (char x)
    {
        cout << "Character exception" << endl;
    }

    return 0;
}