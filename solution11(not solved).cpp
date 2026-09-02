#include <iostream>
using namespace std;

class Student
{
public:
    int marks[5];

public:
    
    void setMarks()
    {
        for(int i = 0; i <= 5; i++)
            cin >> marks[i];
    }

    int total()
    {
        int t = 0;
        for(int i = 0; i < 5; i++)
            t += marks[i];
        return t;
    }
};


int main()
{
    Student a;
    a.setMarks();
    cout << a.total();
}
