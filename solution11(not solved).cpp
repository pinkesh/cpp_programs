#include <iostream>
using namespace std;

class Student
{
public:
    int marks[5];

public:
    Student(int[] y)
    {
        marks = y;
    }
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
    Student a(1, 2, 3, 4, 5);
    a.setMarks();
    cout << a.total();
}
