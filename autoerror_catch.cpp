#include <iostream>
#include <vector>
using namespace std;

int main()
{
    try
    {
        vector<int> numbers;
        numbers.push_back(10);
        numbers.push_back(20);
        numbers.push_back(30);

        cout << "Before at()" << endl;

        cout << numbers.at(10) << endl;

        cout << "After at()" << endl;
    }
    catch (const exception& e)
    {
        cout << "Catch executed!" << endl;
        cout << "Error: " << e.what() << endl;
    }

    cout << "Program continues..." << endl;

    return 0;
}