#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s = "Hello";

    cout << "String     : " << s << endl;
    cout << "Size       : " << s.size() << endl;
    cout << "Length     : " << s.length() << endl;
    cout << "Empty?     : " << s.empty() << endl;
    cout << "Capacity   : " << s.capacity() << endl;
    cout << "Max size   : " << s.max_size() << endl;

    return 0;
}