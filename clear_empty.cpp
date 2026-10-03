#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s = "Hello World";

    cout << "Before clear:" << endl;
    cout << "Size: " << s.size() << endl;
    cout << "Empty: " << s.empty() << endl;

    s.clear();

    cout << "\nAfter clear:" << endl;
    cout << "Size: " << s.size() << endl;
    cout << "Empty: " << s.empty() << endl;

    return 0;
}