#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;

    cout << "Initial size: "
         << s.size() << endl;

    cout << "Initial capacity: "
         << s.capacity() << endl;

    s.reserve(100);

    cout << "\nAfter reserve(100)" << endl;

    cout << "Size: "
         << s.size() << endl;

    cout << "Capacity: "
         << s.capacity() << endl;

    s = "Hello";

    cout << "\nAfter adding Hello" << endl;

    cout << "Size: "
         << s.size() << endl;

    cout << "Capacity: "
         << s.capacity() << endl;

    return 0;
}