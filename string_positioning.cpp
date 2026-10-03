#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name = "Hello";

    cout << name[0] << endl;
    cout << name[1] << endl;
    cout << name[4] << endl;

    cout << name.at(1) << endl;

    try
    {
        cout << name.at(10) << endl;
   }
    catch (const out_of_range& e)
    {
        cout << "Exception: " << e.what() << endl;
    }

    return 0;
}