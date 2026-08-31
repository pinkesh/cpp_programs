#include <iostream>
using namespace std;

class Books
{
private:
    string title[3];

public:
    void input()
    {
        for(int i = 0; i < 3; i++)
        {
            cout << "Enter title: ";
            cin >> title[i];
        }
    }

    void show()
    {
        for(int i = 0; i < 3; i++)
            cout << title[i] << endl;
    }
};