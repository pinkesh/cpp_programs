#include <iostream>
using namespace std;

class Student
{
private:
    int marks = 90;

public:
    friend void showMarks(Student s);
};

// This function is NOT a member of Student
void showMarks(Student s)
{
    cout << "Marks = " << s.marks << endl;
}

int main()
{
    Student s;

    showMarks(s);

    return 0;
}