#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s1 = "Hello";
    string s2("World");
    string s3(5, '*');
    string s4; // Empty string
    //s4 = "hi how are you";

    cout << "s1 = " << s1 << endl;
    cout << "s2 = " << s2 << endl;
    cout << "s3 = " << s3 << endl;
    cout << "s4 = " << s4 << endl;

    return 0;
}