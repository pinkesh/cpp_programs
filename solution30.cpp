#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    int marks;

    void show()
    {
        cout << name << " " << marks << endl;
    }
};

int main()
{
    Student s[3];

    s[0].name = "A";
    s[0].marks = 80;

    s[1].name = "B";
    s[1].marks = 90;

    s[2].name = "C";
    s[2].marks = 70;

    for(int i = 0; i < 3; i++)
        s[i].show();
}