#include <iostream>
#include <string>
using namespace std;

int main()
{
    string text = "I like C++. C++ is powerful. I use C++.";

    string oldText = "C++";
    string newText = "C#";

    size_t position = 0;

    while ((position = text.find(oldText, position))
           != string::npos)
    {
        text.replace(position, oldText.length(), newText);

        position += newText.length();
    }

    cout << text << endl;

    return 0;
}