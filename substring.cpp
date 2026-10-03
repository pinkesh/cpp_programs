#include <iostream>
#include <string>
using namespace std;

int main()
{
    string text = "HelloWorldfgdfgdfgdfgdf";

    string part1 = text.substr(0, 5);
    string part2 = text.substr(5,5);

    cout << part1 << endl;
    cout << part2 << endl;

    return 0;
}