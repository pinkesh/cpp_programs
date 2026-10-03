#include <iostream>
using namespace std;

class Student
{
public:
    int rollNo;
    int marks;

    void display()
    {
        cout << rollNo << " " << marks << endl;
    }
};

int main()
{
    Student s[3];

    s[0].rollNo = 101;
    s[0].marks = 80;

    s[1].rollNo = 102;
    s[1].marks = 90;

    s[2].rollNo = 103;
    s[2].marks = 85;

    s[0].display();
    s[1].display();
    s[2].display();

    cout << "Address of s[0] = " << &s[0] << endl;
    cout << "Address of s[1] = " << &s[1] << endl;
    cout << "Address of s[2] = " << &s[2] << endl;
    
    return 0;
}