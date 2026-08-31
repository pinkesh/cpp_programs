#include <iostream>
using namespace std;

// Question 1
class Student
{
public:
    int marks;

    void show()
    {
        cout << marks << " ";
    }
};

int main()
{
    Student s1, s2;
    s1.marks = 70;
    s2.marks = 85;

    s1.show();
    s2.show();
}