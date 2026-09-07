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

    void display()
    {
        cout << "Marks: " << marks << endl;
    }
};

// Function returning Student object
Student createStudent()
{
    Student s;
    s.setMarks(90);

    return s;   // Returning object
}

int main()
{
    Student s1;

    s1 = createStudent();   // Receive returned object

    s1.display();

    return 0;
}