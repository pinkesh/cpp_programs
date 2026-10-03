#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s = "I Python";

    cout << "Before: " << s << endl;

    s.insert(2, "like ");

    cout << "After : " << s << endl;

    s.replace(7, 6, "C++");

    cout << s << endl;

    return 0;
}