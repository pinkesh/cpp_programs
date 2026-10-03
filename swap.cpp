#include <iostream>
#include <string>
using namespace std;

int main()
{
    string first = "C++";
    string second = "Python";

    cout << "Before swap:" << endl;
    cout << "First  = " << first << endl;
    cout << "Second = " << second << endl;

    string temp = first;
    first = second;
    second = temp;

    //first.swap(second);
    //swap(first, second);

    cout << "\nAfter swap:" << endl;
    cout << "First  = " << first << endl;
    cout << "Second = " << second << endl;

    return 0;
}