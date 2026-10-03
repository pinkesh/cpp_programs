#include <iostream>
#include <string>
using namespace std;

int main()
{
    string text1 = "I am learning C++ programming";

    size_t position;
    position = text1.find("C++");

    if (position != string::npos)
    {
        cout << "C++ found at position: "
             << position << endl;
    }
    else
    {
        cout << "Not found" << endl;
    }
    //multiple find
    //_________________________________________________________
    string text = "C++ is powerful. I love C++. C++ is fast.";

    string searchText = "C++";

    position = text.find(searchText);

    while (position != string::npos)
    {
        cout << "Found at position: "
             << position << endl;

        position = text.find(searchText, position + 1);
    }

    //rfind
    string fileName = "report.final.version.xlsx";

    size_t first = fileName.find('.');
    size_t last = fileName.rfind('.');

    cout << "First dot: " << first << endl;
    cout << "Last dot : " << last << endl;

    string extension = fileName.substr(last + 1);

    cout << "Extension: " << extension << endl;
    return 0;
}