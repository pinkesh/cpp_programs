#include <iostream>
using namespace std;

class Person
{
public:
    string name;

    Person()
    {
        name = "Unknown";
    }
};

class Student : virtual public Person
{
public:
    string surname = "abc";
    void setStudentName()
    {
        name = "Rahul";
    }
};

class Teacher : virtual public Person
{
public:
string surname = "xyz";
    void setTeacherName()
    {
        name = "Dr. Patel";
    }
};

class TeachingAssistant : public Student, public Teacher
{
};

int main()
{
    TeachingAssistant ta;

    ta.name = "Brendon";   // ERROR: ambiguous

    ta.Student::name = "Rahul";
    ta.Teacher::name = "Pinkesh";

    cout << "Student side: " << ta.Student::name << endl;
    cout << "Teacher side: " << ta.Teacher::name << endl;
    cout << "Student side: " << ta.Student::surname << endl;
    cout << "Teacher side: " << ta.Teacher::surname << endl;
    cout << "Teacherassistant: " << ta.name << endl;

    return 0;
}