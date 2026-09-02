#include <iostream>
using namespace std;

class Student
{
public:
    int marks;

    Student(int m)
    {
        marks = m;
    }
};

void change(Student s)
{
    s.marks = s.marks + 10;
}

int main()
{
    Student s(50);
    change(s);
    cout << s.marks;
}

// doesn't change because it's function passes the object by value