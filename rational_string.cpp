#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
    string a = "Admin";
    string b = "aDmiN";

    for (char& ch : a)
        ch = tolower(ch);

    for (char& ch : b)
        ch = tolower(ch);

    cout << "a == b : " << (a == b) << endl;
    cout << "a != b : " << (a != b) << endl;
    cout << "a < b  : " << (a < b) << endl;
    cout << "a > b  : " << (a > b) << endl;

    int result = a.compare(b);

    if (result == 0)
    {
        cout << "Strings are equal" << endl;
    }
    else if (result < 0)
    {
        cout << "a comes before b" << endl;
    }
    else
    {
        cout << "a comes after b" << endl;
    }

    string text = "HelloWorld";

    result = text.compare(1, 5, "World");

    cout << "Result of comparison: " << result << endl;

    if (result == 0)
        cout << "Matched!" << endl;
    else
        cout << "Not matched!" << endl;

    
    return 0;
}