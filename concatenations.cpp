#include <iostream>
#include <string>
using namespace std;

int main()
{
    string firstName = "Pinkesh";
    string lastName = "Patel";

    string fullName = firstName + " " + lastName;

    cout << fullName << endl;

    fullName += " - Developer";

    cout << fullName << endl;


    return 0;
}