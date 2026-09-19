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
        cout << "Integer exception: " << x << endl;
    }

    try
    {
        throw 3.14;
    }
    catch (double x)
    {
        cout << "Double exception: " << x << endl;
    }

    try
    {
        throw 'A';
    }
    catch (char x)
    {
        cout << "Character exception: " << x << endl;
    }
    try
    {
        throw "Something went wrong";
    }
    catch (const char* message)
    {
        cout << "Error: " << message << endl;
    }

    return 0;
}