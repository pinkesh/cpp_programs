#include <iostream>
using namespace std;

class Student
{
public:
    int marks;

    void setMarks(int m)
    {
        marks = m;
    }

    // Object passed as function argument
    void compare(Student s)
    {
        if (marks > s.marks)
            cout << "Student 1 has higher marks";
        else if (marks < s.marks)
            cout << "Student 2 has higher marks";
        else
            cout << "Both have same marks";
    }
};

int main()
{
    Student s1, s2;

    s1.setMarks(85);
    s2.setMarks(92);

    s2.compare(s1);   // Passing object s2 as argument

    return 0;
}