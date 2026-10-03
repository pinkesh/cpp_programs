#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s = "Hello";

    cout << s << endl;

    s.push_back('!');

    cout << s << endl;

    s.pop_back();

    cout << s << endl;

    return 0;
}